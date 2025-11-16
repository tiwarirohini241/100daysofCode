//Q100: Print all sub-strings of a string.//

#include <stdio.h>
#include <string.h>
int main() 
{
    char str[100];
    int i,j,k,len;
    printf("enter string");
    scanf("%s",str);
    len=strlen(str);
    for (i=0;i<len;i++) 
    {
        for (j=i;j<len;j++) 
        {
            for (k=i;k<=j;k++) 
            {
                printf("%c",str[k]);
            }
            printf(",");
        }
    }
}