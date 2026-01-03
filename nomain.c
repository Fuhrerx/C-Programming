#include <stdio.h>
#include <stdlib.h> // Required for malloc, calloc, realloc, free

// 1. Define the structure
struct Student
{
    int id;
    float grade;
};

int main()
{
    int num_students;
    // 2. Declare a pointer to the struct type
    struct Student *students_ptr;

    printf("Enter the number of students: ");
    if (scanf("%d", &num_students) != 1 || num_students <= 0)
    {
        printf("Invalid input. Exiting.\n");
        return 1;
    }

    // 3. Allocate memory using malloc
    // Calculates the total bytes needed for num_students elements
    students_ptr = (struct Student *)malloc(num_students * sizeof(struct Student));

    // Always check if allocation was successful
    if (students_ptr == NULL)
    {
        printf("Memory allocation failed. Exiting.\n");
        return 1;
    }

    // Populate the array elements
    for (int i = 0; i < num_students; ++i)
    {
        // Use array notation (students_ptr[i]) or pointer arithmetic (students_ptr + i)
        students_ptr[i].id = i + 1;
        students_ptr[i].grade = (float)(90 + i);
    }

    // Display Information
    printf("\nDisplaying Student Information:\n");
    for (int i = 0; i < num_students; ++i)
    {
        printf("Student %d: ID = %d, Grade = %.2f\n", i + 1, students_ptr[i].id, students_ptr[i].grade);
    }

    // 5. Free the dynamically allocated memory
    free(students_ptr);
    students_ptr = NULL; // Good practice to prevent dangling pointers

    return 0;
}
