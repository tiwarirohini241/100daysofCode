//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.//
#include <stdio.h>
#include <ctype.h>

int main() 
{
    FILE *fp;
    char c;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    fp = fopen("info.txt", "r");

    if(fp == NULL) 
    {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    while((c = fgetc(fp)) != EOF) 
    {
        characters++;

        if(c == '\n')
            lines++;

        if(c == ' ' || c == '\n' || c == '\t') 
        {
            inWord = 0;
        } else {
            if(inWord == 0) 
            {
                words++;
                inWord = 1;
            }
        }
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    
}
