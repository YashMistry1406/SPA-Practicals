#include<stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
            printf("%c ", 65+j);
        printf("\n");
    }
    return 0;
}
/*Output:
Enter the number of rows: 5
A
A B
A B C
A B C D
A B C D E
*/
