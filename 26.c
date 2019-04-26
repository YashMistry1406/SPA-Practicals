#include<stdio.h>
int main()
{
    int i, j, k, n=5;
    for(i=0; i<n; i++)
    {
        for(j=1; j<n-i; j++)
        {
            printf(" ");

        }
        for(j=0; j<=i; j++)
        {
            printf("%d ", j+1);

        }
        printf("\n");
    }

}
