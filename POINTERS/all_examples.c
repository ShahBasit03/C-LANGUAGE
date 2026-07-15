/* 
================================
5 POINTER & CALL BY VALUE EXAMPLES
================================
*/

#include<stdio.h>

/* ========================================
   QUESTION 1: SWAP USING CALL BY VALUE
   ======================================== */

/*
EXPLANATION:
- Call by Value means we pass a COPY of the variable
- Changes inside the function do NOT affect the original
- OUTPUT: x=10, y=20 (NO SWAP - original values unchanged)

WHY: 
- swap(x, y) creates copies of x and y inside the function
- We swap the copies, not the originals
- When function returns, the copies are destroyed
*/

void swap_by_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function - a=%d, b=%d\n", a, b);  // Shows swapped values
}

void question1()
{
    printf("\n===== QUESTION 1: SWAP BY VALUE =====\n");
    int x = 10, y = 20;
    
    printf("Before swap: x=%d, y=%d\n", x, y);
    swap_by_value(x, y);
    printf("After swap: x=%d, y=%d\n", x, y);  // ❌ Still 10, 20 - NOT swapped!
    printf("PREDICTION: Values NOT swapped (call by value limitation)\n");
}


/* ========================================
   QUESTION 2: SWAP USING POINTERS
   ======================================== */

/*
EXPLANATION:
- We pass ADDRESSES of variables using &x, &y
- The function receives pointers (int *a, int *b)
- We dereference (*a, *b) to modify the original values
- OUTPUT: x=20, y=10 (SWAP SUCCESSFUL)

WHY:
- Pointers point to the original variables
- Changes through pointers modify the originals
- When function returns, the changes persist
*/

void swap_by_pointer(int *a, int *b)
{
    int temp = *a;      // Store value at address a
    *a = *b;            // Put value from address b into address a
    *b = temp;          // Put temp (original value) into address b
    printf("Inside function - *a=%d, *b=%d\n", *a, *b);  // Shows swapped
}

void question2()
{
    printf("\n===== QUESTION 2: SWAP BY POINTER =====\n");
    int x = 10, y = 20;
    
    printf("Before swap: x=%d, y=%d\n", x, y);
    swap_by_pointer(&x, &y);  // Pass addresses
    printf("After swap: x=%d, y=%d\n", x, y);  // ✅ Now 20, 10 - SWAPPED!
    printf("PREDICTION: Values SWAPPED successfully\n");
}


/* ========================================
   QUESTION 3: DOUBLE A NUMBER BY VALUE
   ======================================== */

/*
EXPLANATION:
- Pass a COPY of the number
- We modify the copy, not the original
- OUTPUT: Original number remains unchanged
- This demonstrates the limitation of call by value

WHY:
- Function receives: a copy of the value
- Changes to copy don't affect original
*/

void double_by_value(int a)
{
    a = a * 2;
    printf("Inside function - a=%d\n", a);  // Shows doubled value
}

void question3()
{
    printf("\n===== QUESTION 3: DOUBLE BY VALUE =====\n");
    int num = 5;
    
    printf("Before: num=%d\n", num);
    double_by_value(num);
    printf("After: num=%d\n", num);  // ❌ Still 5 - NOT doubled!
    printf("PREDICTION: Number NOT changed (we modified a copy)\n");
}


/* ========================================
   QUESTION 4: DOUBLE A NUMBER BY POINTER
   ======================================== */

/*
EXPLANATION:
- Pass the ADDRESS of the number using &num
- The function receives a pointer (int *a)
- We dereference (*a) to modify the original
- OUTPUT: Original number is doubled

WHY:
- Pointer points to the original variable
- *a = *a * 2 modifies the actual variable
- When function returns, changes persist
*/

void double_by_pointer(int *a)
{
    *a = *a * 2;  // Dereference and modify the original value
    printf("Inside function - *a=%d\n", *a);  // Shows doubled value
}

void question4()
{
    printf("\n===== QUESTION 4: DOUBLE BY POINTER =====\n");
    int num = 5;
    
    printf("Before: num=%d\n", num);
    double_by_pointer(&num);  // Pass address
    printf("After: num=%d\n", num);  // ✅ Now 10 - DOUBLED!
    printf("PREDICTION: Number is doubled (pointer modification)\n");
}


/* ========================================
   QUESTION 5: INCREMENT THREE INTEGERS BY 1 USING POINTERS
   ======================================== */

/*
EXPLANATION:
- Pass ADDRESSES of all three numbers
- The function receives three pointers
- Dereference each pointer to increment by 1
- All three original values are modified

WHY:
- Each pointer points to an original variable
- *a++, *b++, *c++ increment the actual values
- When function returns, all changes persist
*/

void increment_three(int *a, int *b, int *c)
{
    *a = *a + 1;  // Increment value at address a
    *b = *b + 1;  // Increment value at address b
    *c = *c + 1;  // Increment value at address c
    
    printf("Inside function - *a=%d, *b=%d, *c=%d\n", *a, *b, *c);
}

void question5()
{
    printf("\n===== QUESTION 5: INCREMENT THREE INTEGERS =====\n");
    int x = 10, y = 20, z = 30;
    
    printf("Before: x=%d, y=%d, z=%d\n", x, y, z);
    increment_three(&x, &y, &z);  // Pass addresses
    printf("After: x=%d, y=%d, z=%d\n", x, y, z);  // ✅ All incremented!
    printf("PREDICTION: All three numbers incremented by 1\n");
}


/* ========================================
   MAIN FUNCTION - RUNS ALL EXAMPLES
   ======================================== */

int main()
{
    printf("\n**** COMPARING CALL BY VALUE vs CALL BY POINTER ****\n");
    
    question1();
    question2();
    question3();
    question4();
    question5();
    
    printf("\n\n**** SUMMARY ****\n");
    printf("Call by Value:  Changes INSIDE function do NOT affect originals\n");
    printf("Call by Pointer: Changes INSIDE function DO affect originals\n");
    printf("Why? Because pointers point to original variables, not copies!\n");
    
    return 0;
}
