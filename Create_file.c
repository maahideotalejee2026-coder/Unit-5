#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;
    FILE *file;

    printf("Enter Roll Number: ");
    if (scanf("%d", &s.rollNo) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter Name: ");
    scanf(" %49[^\n]", s.name);

    printf("Enter Marks: ");
    if (scanf("%f", &s.marks) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    file = fopen("student.txt", "w");

    if (file == NULL)
    {
        printf("Unable to create the file.\n");
        return 1;
    }

    fprintf(file, "Roll Number: %d\n", s.rollNo);
    fprintf(file, "Name: %s\n", s.name);
    fprintf(file, "Marks: %.2f\n", s.marks);

    fclose(file);

    file = fopen("student.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    printf("\n----- Student Details Stored in File -----\n");

    int ch;

    while ((ch = fgetc(file)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}
