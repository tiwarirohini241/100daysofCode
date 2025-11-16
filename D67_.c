/*Q117: Write a program to take two sorted arrays of size m and n as input. 
Merge both the arrays such that the merged array is also sorted. Print the merged array.*/

#include <stdio.h>
int main() 
{
    int m,n,i=0,j=0,k=0;
    int a[100],b[100],c[200];
    printf("size of first array:");
    scanf("%d",&m);
    for (i=0;i<m;i++)
    {
        printf("Enter element:");
        scanf("%d",&a[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&n);
    for (j=0;j<n;j++)
    {
        printf("Enter element:");
        scanf("%d",&b[j]);
    }
    i=j=0;
    while(i<m && j<n) 
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    while (i<m)
    {
        c[k++]=a[i++];
    }
    while (j<n)
    {
        c[k++]=b[j++];
    }
    printf("Merged array:");
    for(i=0;i<k;i++)
    {
        printf("%d",c[i]);
    }
}