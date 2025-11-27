/* Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.


Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

typedef enum {
    ADMIN,
    USER,
    GUEST
} Role;

int main() {
    char input[20];
    scanf("%19s", input);

    Role r;

    if (strcmp(input, "ADMIN") == 0)
        r = ADMIN;
    else if (strcmp(input, "USER") == 0)
        r = USER;
    else if (strcmp(input, "GUEST") == 0)
        r = GUEST;
    else {
        printf("Invalid Role\n");
        return 0;
    }

    switch (r) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;

        case USER:
            printf("Welcome User!\n");
            break;

        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }

    return 0;
}
