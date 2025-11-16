/*Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.*/

#include <stdio.h>
int main() 
{
    int i,n;
    printf("size array");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++) 
    {
        printf("enter element");
        scanf("%d",&num[i]);
    }
    int answer[n];
    for(int i = 0; i < n; i++) 
    {
        int prod=1;
        for(int j=0;j<n;j++) 
        {
            if(i!=j) 
            {
                prod*=num[j];
            }
        }
        answer[i]=prod;
    }
    for(i=0;i<n;i++) 
    {
        printf("%d,",answer[i]);
    }
    printf("\n");
}