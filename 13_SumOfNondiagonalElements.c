#include<stdio.h>
int sumNonDiagonal(int a[20][20], int m, int n)
{   int sum=0, i, j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i!=j)
            {
                sum+= a[i][j];
            }
        }
    }
    return sum;
}
main()
{
    int a[20][20];
    int m, n, i, j;
    printf("Enter order of the matrix: ");
    scanf("%d %d", &m, &n);
    if(m!=n)
    {
        printf("Matrix should be a square matrix!");
        exit(1);
    }
    printf("\nEnter Elements: ");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\nEnter Element[%d , %d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    int sum = sumNonDiagonal(a, m, m);
    printf("\nSum of non-diagonal elements is %d",sum);

}
