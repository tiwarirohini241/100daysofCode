//Q128:Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.//
#include <stdio.h>
#include <ctype.h>

int main() 
{
    FILE *fp;
    char filename[50];
    char ch;
    int vowels = 0, consonants = 0;

    printf("Enter filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if(fp == NULL) 
    {
        printf("Error: Cannot open file\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) 
    {
        ch = tolower(ch);   // convert to lowercase for easy checking

        if (ch >= 'a' && ch <= 'z') {   // only alphabets
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    
}
