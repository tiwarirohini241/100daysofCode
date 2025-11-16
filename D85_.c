//Q134:Assign explicit values starting from 10 and print them.//
#include <stdio.h>

enum Codes 
{
    SUCCESS = 10,
    FAILURE,
    TIMEOUT
};

int main() 
{
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);

}
