/*Define a struct with enum Gender and print person's gender.

Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

Code:
#include <stdio.h>

// Define enum Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define struct Person with enum member
struct Person {
    enum Gender gender;
};

int main() {

    // Create a person object and assign enum value
    struct Person p;
    p.gender = MALE;   // You may change to FEMALE or OTHER to test

    // Print gender using switch
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid Gender\n");
    }

    return 0;
}
