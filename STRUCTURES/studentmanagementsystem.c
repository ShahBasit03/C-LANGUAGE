#include <stdio.h>
#include <string.h>

typedef struct student {
  int id;
  char name[50];
  int age;
  int marks[5];
  int total ;
  float average;
  char grade;
}student;

void inputStudent(student *s) {
    printf("Enter id: ");
    scanf("%d", &s->id);

    printf("Enter name: ");
    scanf(" %[^\n]", s->name);

    printf("Enter age: ");
    scanf("%d", &s->age);

    s->total = 0;
    for (int j = 0; j < 5; j++) {
        printf("Enter mark %d: ", j + 1);
        scanf("%d", &s->marks[j]);
        s->total += s->marks[j];
    }

    s->average = s->total / 5.0f;

    if (s->average >= 90) s->grade = 'A';
    else if (s->average >= 75) s->grade = 'B';
    else if (s->average >= 60) s->grade = 'C';
    else s->grade = 'F';
}

void displayStudent(const student *s) {
    printf("ID=%d Name=%s Age=%d Total=%d Avg=%.2f Grade=%c\n",
           s->id, s->name, s->age, s->total, s->average, s->grade);
}

int main(void) {
    student students[10];
    int n;

    printf("How many students? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        inputStudent(&students[i]);
    }

    printf("\nStudents data:\n");
    for (int i = 0; i < n; i++) {
        displayStudent(&students[i]);
    }

    return 0;
}