//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>

int main() 
{
    char s[200];
    int i, j, k, maxLen = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++) 
    {
        int visited[256] = {0};
        int currentLen = 0;

        for(j = i; s[j] != '\0'; j++) 
        {
        
            if(visited[(int)s[j]] == 1) 
            {
                break;
            }

            visited[(int)s[j]] = 1;
            currentLen++;
        }

        if(currentLen > maxLen) 
        {
            maxLen = currentLen;
        }
    }

    printf("%d\n", maxLen);

    
}
