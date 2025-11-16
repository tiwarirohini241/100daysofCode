//Q109:Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.//
#include <stdio.h>

int main() 
{
    int n, k, i, j;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value of k: ");
    scanf("%d", &k);

    int maxSum = -999999;  

    for(i = 0; i <= n - k; i++) 
    {
        int currentSum = 0;

        for(j = 0; j < k; j++) 
        {
            currentSum += arr[i + j];
        }

        if(currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
    }

    printf("Maximum sum of subarrays of size %d is: %d\n", k, maxSum);

    
}
