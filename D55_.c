//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times//

#include <stdio.h>
int main() 
{
    int i,j,n;
    printf("length of the array");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++) 
    {
        printf("enter element");
        scanf("%d",&num[i]);
    }
    int c=0;
    int major=-1;
    for(i=0;i<n;i++) 
    {
        c=0;
        for(j=0;j<n;j++) 
        {
            if(num[i]==num[j]) 
            {
                c++;
            }
        }
        if(c>(n/2)) 
        {
            major=num[i];
            break;
        }
    }
    printf("majority element:%d",major);
}