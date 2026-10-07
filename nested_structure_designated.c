#include <stdio.h>

struct Marks
{
    int maths;
    int science;
    int english;
};

struct Student
{
    int rollNo;
    char name[30];
    struct Marks marks;
};

int main()
{
    struct Student student = {
        .rollNo = 201,
        .name = "Anjali",
        .marks = {
            .maths = 85,
            .science = 91,
            .english = 88
        }
    };

    printf("Student Details\n");
    printf("Roll Number: %d\n", student.rollNo);
    printf("Name: %s\n", student.name);
    printf("Maths: %d\n", student.marks.maths);
    printf("Science: %d\n", student.marks.science);
    printf("English: %d\n", student.marks.english);

    return 0;
}
