/*Find and print the student with the highest marks.

Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/


#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n, i, topperIndex = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Reading student details
    for (i = 0; i < n; i++) {
        printf("Enter Name, Roll No, Marks for student %d: ", i + 1);
        scanf("%s %d %d", s[i].name, &s[i].roll, &s[i].marks);

        // Track topper
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    // Printing topper details
    printf("\nTopper: %s (Marks: %d)\n", s[topperIndex].name, s[topperIndex].marks);

    return 0;
}
