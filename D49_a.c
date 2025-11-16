//Q97: Print the initials of a name.//

#include<stdio.h>
int main()
{
    char n[100];
    fgets(n,sizeof(n),stdin);
    int i=0;
    if(n[0]!=' ')
    {
        printf("%c",n[0]);
    }
    while(n[i]!='\0')
    {
        if(n[i]==' ' && n[i+1]!=' ' && n[i+1]!='\0')
        {
            printf("%c",n[i+1]);
        }
        i++;
    }
}