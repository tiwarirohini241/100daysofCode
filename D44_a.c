//Q87: Count spaces, digits, and special characters in a string.//

#include <stdio.h>
int main()
{
    char str[100];
    int sc=0,d=0,sp=0;
    printf("Enter a string:");
    fgets(str, sizeof(str), stdin);
    for (int i=0;str[i]!='\0';i++) 
    {
        if (str[i]==' ')
        {
            sc++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            d++;
        }
        else if ((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || str[i]=='\n')
        {
            continue;
        }
        else
        {
            sp++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", sc, d, sp);
}