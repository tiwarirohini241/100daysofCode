//Q136:Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.//
#include <stdio.h>

enum Role 
{
    ADMIN = 1,
    USER,
    GUEST
};

int main() 
{
    enum Role r;

    
    r = USER;

    switch (r) 
    {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have limited access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! Please login for more features.\n");
            break;

        default:
            printf("Invalid Role!\n");
    }

    
}
