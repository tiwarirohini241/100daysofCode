//Q94: Find the longest word in a sentence.//

#include <stdio.h>
int main() 
{
    char str[200],word[50],longest[50];
    int i=0,j=0,maxlen=0,clen=0;
    printf("Enter sentence");
    fgets(str,sizeof(str),stdin);
    while (str[i]!='\0') 
    {
        if (str[i]==' '||str[i]=='\n') 
        {
            word[j]='\0';
            clen=j;
            if (clen>maxlen) 
            {
                maxlen=clen;
                int k;
                for (k=0;k<=j;k++)
                {
                    longest[k]=word[k];
                }
                j=0;
            } 
        }
        else 
        {
            word[j++]=str[i];
        }
        i++;
    }
    printf("Longest:%s",longest);
}