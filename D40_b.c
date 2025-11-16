//Q80: Multiply two matrices.//

#include <stdio.h>
int main() 
{
    int r1, c1, r2, c2;
    printf("enter rows and coulumns for matirx 1");
    scanf("%d %d", &r1, &c1);
    int A[r1][c1];
    for (int i = 0; i < r1; i++)
    {  
        for (int j = 0; j < c1; j++)
        {
            printf("enter element");
            scanf("%d", &A[i][j]);
        }
    }
    printf("enter rows and coulumns for matrix 2");
    scanf("%d %d", &r2, &c2);
    int B[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    int C[r1][c2];
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < c1; k++) 
            {
                C[i][j] += A[i][k] * B[k][j];
            }
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

}