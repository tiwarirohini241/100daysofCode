//Q95: Check if one string is a rotation of another.//

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100],check[200];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    if (strlen(str1)!=strlen(str2)) 
    {
        printf("No rotation");
    }

    strcpy(check, str1);
    strcat(check, str1);  

    if (strstr(check,str2)!=NULL)
    {
        printf("Rotation");
    }
    else
    {
        printf("No rotation");
    }
}