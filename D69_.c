/*Q119: Write a program to take an integer array as input. Only one element will be repeated. 
Print the repeated element. Try to find the result in one single iteration.*/

#include <stdio.h>
int main() 
{
    int n,i,num,sum=0,total;
    scanf("%d",&n);
    for (i=0;i<n;i++) 
    {
        scanf("%d",&num);
        sum+=num;
    }
    total =(n-1)*(n-2)/2;
    printf("%d",sum-total);
}