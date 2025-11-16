//Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.//

#include <stdio.h>
int main() 
{
    int n,i;
    printf("number of elements:");
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++) 
    {
        printf("enter element:");
        scanf("%d",&arr[i]);
    }
    int max=arr[0],current=arr[0];
    for (i=1;i<n;i++) 
    {
        if (current<0)
        {
            current=arr[i];
        }
        else
        {
            current+=arr[i];
        }
        if (current>max)
            max=current;
    }
    printf("max sum:%d\n",max);
}