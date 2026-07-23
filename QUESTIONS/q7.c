#include <stdio.h>

struct Student
{
    int rollNo;
    char name[350];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
      printf("\nEnter details of Student %d\n", i + 1);

        printf("the roll Number: ");
      scanf("%d", &s[i].rollNo);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>\n");
    printf("Roll No\t\t Name\t\t Marks\n");
    printf("<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t%.2f\n",
               s[i].rollNo,s[i].name,s[i].marks);
    }

    return 0;
}