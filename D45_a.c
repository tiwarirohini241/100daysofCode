//Q89: Count frequency of a given character in a string.//

#include <stdio.h>
int main() 
{
    char str[100],ch;
    int i=0,c=0;
    printf("enter string");
    scanf("%s",str);
    printf("enter character to find");
    scanf(" %c",&ch);
    while (str[i]!='\0') 
    { 
        if (str[i]==ch)
        {
            c++;
        }
        i++;
    }
    printf("%d",c);
}