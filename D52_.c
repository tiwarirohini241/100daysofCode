//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.//

#include<stdio.h>
int main()
{
    int i,n,x;
    printf("number of elements");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter element");
        scanf("%d",&arr[i]);
    }
    printf("enter x");
    scanf("%d",&x);
    int ceil=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=x)
        {
            ceil=i;
            break;
        }
    }
    printf("%d",ceil);
}