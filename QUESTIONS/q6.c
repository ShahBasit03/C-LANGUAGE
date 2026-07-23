#include <stdio.h>

struct Student
{
    int rollNo;
    float marks;
};

int main()
{
     struct Student s[100];
 int n, i, topper = 0;

  printf("Enter the number of students: ");
  scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

       printf("Roll Number: ");
      scanf("%d", &s[i].rollNo);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // now to find topper
    for(i = 1; i < n; i++)
    {
        if(s[i].marks > s[topper].marks)
        {
            topper = i;
        }
    }

    printf("The toppers credentials are below\n");
    printf("Roll Number : %d\n", s[topper].rollNo);
    printf("Marks       : %.2f\n", s[topper].marks);

    return 0;
}