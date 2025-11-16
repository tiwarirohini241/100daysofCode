//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.//
#include <stdio.h>

int main() 
{
    FILE *fp;
    char name[50];
    int roll, marks;
    int n, i;

    
    fp = fopen("students.txt", "w");
    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) 
    {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", name);
        printf("Roll Number: ");
        scanf("%d", &roll);
        printf("Marks: ");
        scanf("%d", &marks);

        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) 
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStored Student Records:\n");
    printf("------------------------\n");

    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) 
    {
        printf("Name: %s, Roll: %d, Marks: %d\n", name, roll, marks);
    }

    fclose(fp);

    
}
