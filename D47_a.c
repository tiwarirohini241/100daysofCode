//Q93:Check if two strings are anagrams of each other.//
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[26] = {0};
    int i;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0'; i++) {
        if(str1[i] >= 'a' && str1[i] <= 'z')
            freq[str1[i] - 'a']++;
        else if(str1[i] >= 'A' && str1[i] <= 'Z')
            freq[str1[i] - 'A']++;
    }

    for(i = 0; str2[i] != '\0'; i++) {
        if(str2[i] >= 'a' && str2[i] <= 'z')
            freq[str2[i] - 'a']--;
        else if(str2[i] >= 'A' && str2[i] <= 'Z')
            freq[str2[i] - 'A']--;
    }

    for(i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("The strings are NOT anagrams.\n");
            return 0;
        }
    }

    printf("The strings ARE anagrams.\n");
    return 0;
}
