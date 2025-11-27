/*Write a function that accepts a structure as parameter and prints its members.

Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

// Function that accepts structure as parameter
void displayStudent(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
}

int main() {
    struct Student st;

    printf("Enter Name, Roll, Marks: ");
    scanf("%s %d %d", st.name, &st.roll, &st.marks);

    displayStudent(st);  // passing structure to function

    return 0;
}
