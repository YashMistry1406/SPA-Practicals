#include<stdio.h>
#include<stdlib.h>

main()
{
    int a[20][20], b[20][20], m, n,p, q , i, j, k, c[20][20], sum;
    printf("Enter number of rows and column of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter Elements of the first matrix");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\nEnter element[%d , %d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter number of rows and columns of the second matrix: ");
    scanf("%d %d", &p, &q);
    if(p!=n)
    {
        printf("\n\nTHE GIVEN ORDER OF MATRIX  CANNOT BE MULTIPLIED!!\n\n");
        exit(1);
    }
        printf("\nEnter Elements of the Second  matrix");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("\nEnter element[%d , %d]: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<q; j++)
        {   sum=0;
            for(k=0; k<n; k++)
               sum+= a[i][k]*b[k][j];
            c[i][j]=sum;
        }
    }
    printf("\n\nThe multiplication of the two  matrixis \n");

    for(i=0; i<m; i++)
    {
        for(j=0; j<q; j++)
            printf("%d\t", c[i][j]);
        printf("\n");
    }

}
/*Output:
Enter number of rows and column of first matrix: 2
2
Enter Elements of the first matrix
Enter element[1 , 1]: 1

Enter element[1 , 2]: 2

Enter element[2 , 1]: 3

Enter element[2 , 2]: 4
Enter number of rows and columns of the second matrix: 2
2

Enter Elements of the Second  matrix
Enter element[1 , 1]: 1

Enter element[1 , 2]: 2

Enter element[2 , 1]: 3

Enter element[2 , 2]: 4


The multiplication of the two  matrixis
7       10
15      228
*/
