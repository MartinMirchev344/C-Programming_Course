#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char name[20];
    int number_in_class;
    float avr_grade;
}student;

int main()
{
    student student;
    strcpy(student.name, "Ivan");
    student.number_in_class = 12;
    student.avr_grade = 5.50;

    printf("Student name: %s\n", student.name);
    printf("Number in class: %d\n", student.number_in_class);
    printf("Average grade: %.2f\n", student.avr_grade);

    
    return 0;
}