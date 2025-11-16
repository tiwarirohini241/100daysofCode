//Q137:Print all enum names and integer values using a loop.//

#include <stdio.h>

enum Colors 
{
    RED = 1,
    GREEN,
    BLUE,
    YELLOW
};

int main() 
{
    enum Colors c;

    
    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW"};

    printf("Enum Names and Values:\n");

    for (c = RED; c <= YELLOW; c++) 
    {
        printf("%s = %d\n", names[c - 1], c);
    }

}
