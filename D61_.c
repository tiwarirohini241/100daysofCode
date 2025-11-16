//Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.//

#include <stdio.h>
int main()
{
    int n,i,j,k,found=0;
    printf("number of elements");
    scanf("%d",&n);
    int arr[n];
    for (i= 0;i<n;i++) 
    {
        printf("Enter element");
        scanf("%d",&arr[i]);
    }
    printf("length of subarray");
    scanf("%d",&k);
    printf("First negative integer:\n");
    for(i=0;i<=n-k;i++) 
    {
        for(j=i;j<i+k;j++) 
        {
            if(arr[j]<0) 
            {
                printf("%d",arr[j]);
                found=1;
                break;
            }
        }
        if(!found) 
        {
            printf("0");
        }
    }
}