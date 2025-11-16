//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.//

#include <stdio.h>
int main() 
{
    int n,x;
    printf("enter n");
    scanf("%d",&n);
    int t=n*(n+1)/2;
    int lsum=0;
    for (x=1;x<=n;x++) 
    {
        lsum+=x;
        int rsum=t-(x*(x-1)/2);
        if (lsum==rsum) 
        {
            printf("%d",x);
        }
    }
    printf("-1");
}