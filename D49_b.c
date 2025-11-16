//Q98: Print initials of a name with the surname displayed in full.//

#include <stdio.h>
#include <string.h>
int main() 
{
    char name[100];
    int i,len,last=-1;
    printf("enter name");
    fgets(name, sizeof(name),stdin);
    len = strlen(name);
    for (i = 0;i<len;i++) 
    {
        if (name[i]==' ')
        {
            last=i;
        }
    }
    printf("%c",name[0]);
    for (i=0;i<last;i++) 
    {
        if (name[i]==' ' && name[i+1]!=' ')
        {
            printf("%c", name[i + 1]);
        }
    }
    printf("%s",&name[last+1]);
}