//Q101:QWrite a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.//

#include<stdio.h>
int main()
{
    int i,n,t;
    printf("number of elements");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("enter element");
        scanf("%d",&arr[i]);
    }
    printf("Enter target");
    scanf("%d", &t);
    int f=-1,l=-1;
    for(i=0;i<n;i++)
    {
        if(arr[i]==t)
        {
            if(f==-1)
            {
                f=i;
            }
            l=i;
        }
    }
    printf("%d,%d",f,l);
}