//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.//

#include<stdio.h>
int main()
{
    int i,n;
    printf("number of elements");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter element");
        scanf("%d",&arr[i]);
    }
    int tsum=0;
    for(i=0;i<n;i++)
    {
        tsum+=arr[i];
    }
    int lsum= 0;
    int pivot= -1;
    for(i=0;i<n;i++)
    {
        tsum-=arr[i];
        if(lsum==tsum){
            pivot=i;
            break;
        }
        lsum+=arr[i];
    }
    printf("%d",pivot);
}