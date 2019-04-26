#include<stdio.h>
int main()
{
    int k=1;
    int n, i, j;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i;j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }


}
/*Output:
Enter number of rows: 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
