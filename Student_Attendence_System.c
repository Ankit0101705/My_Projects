#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100

typedef struct Student_Attendance_System
{
    int rollNo;
    char name[50];
    int totalClasses;
    int attendedClasses;
} Student;

void addStudent(Student students[], int *count)
{
    if (*count >= MAX_STUDENTS)
    {
        printf("Maximum Student Limit Reached!\n");
        return;
    }
    printf("Enter Roll Number: ");
    scanf("%d", &students[*count].rollNo);

    printf("Enter Name: ");
    scanf("%s", students[*count].name);

    printf("Enter Total Classes Held: ");
    scanf("%d", &students[*count].totalClasses);

    printf("Enter Classes Attended: ");
    scanf("%d", &students[*count].attendedClasses);

    (*count)++;
    printf("Student Added Successfully!\n");
}

void displayAttendance(Student students[], int count)
{
    int i;
    if (count == 0)
    {
        printf("No Students in the System.\n");
        return;
    }

    printf("\nAttendance Record:\n");
    printf("Roll No\tName\t\tAttendance Percentage\n");
    printf("------------------------------------------\n");

    for (i = 0; i < count; i++)
    {
        float percentage = (float)students[i].attendedClasses / students[i].totalClasses * 100;
        printf("%d\t%s\t\t%.2f%%\n", students[i].rollNo, students[i].name, percentage);
    }
}

void markAttendance(Student students[], int count)
{
    int i;
    if (count == 0)
    {
        printf("No Students in the System.\n");
        return;
    }
    int rollNo;
    printf("Enter Roll Number to Mark Attendance: ");
    scanf("%d", &rollNo);

    for (i = 0; i < count; i++)
    {
        if (students[i].rollNo == rollNo)
        {
            students[i].attendedClasses++;
            printf("Attendance Marked for %s (Roll No: %d).\n", students[i].name, students[i].rollNo);
            return;
        }
    }

    printf("Student with Roll Number %d Not Found.\n", rollNo);
}

int main()
{
    Student students[MAX_STUDENTS];
    int count = 0, choice;

    while (1)
    {
        printf("\nAttendance Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Attendance\n");
        printf("3. Mark Attendance\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent(students, &count);
            break;
        case 2:
            displayAttendance(students, count);
            break;
        case 3:
            markAttendance(students, count);
            break;
        case 4:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid Choice. Please Try Again.\n");
        }
    }
    return 0;
}
