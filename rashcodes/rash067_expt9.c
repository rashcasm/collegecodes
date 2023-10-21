// write a c program to perform the addition of two matrices of size 3x3
#include <stdio.h>
void main()
{
    printf("\nRashmin Chaudhari\nRoll No: 51\n");
    int a[3][3], b[3][3], c[3][3];
    int i,j;
    printf("\nEnter the number for matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the number for matrix B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // // adding
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         c[i][j]=a[i][j]*b[i][j];
    //     }
    // }
    // // Multiplication of matrices
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                c[i][j]=a[i][k]*b[k][j];
            }
        }
    }
    
    printf("\nMatrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("Addition of matrices:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}