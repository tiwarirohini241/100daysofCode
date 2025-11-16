//Q86: Check if a string is a palindrome.//

#include <stdio.h>
int main() {
    char str[100];
    int len = 0, i, palindrome = 1;
    printf("Enter a string:");
    scanf("%s",str);
    while (str[len]!='\0')
    {
        len++;
    }
    for (i=0;i<len/2;i++) 
    {
        if (str[i] != str[len-i-1]) 
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
}