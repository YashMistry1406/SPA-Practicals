#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the length of the pattern: \n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=n-1; j>i; j--)
            printf(" ");
        for(j=0; j<=i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
/*output
Enter the length of the pattern:
5
    *
   **
  ***
 ****
*****
*/