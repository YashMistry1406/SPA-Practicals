#include<stdio.h>
int main()
{
    int i, j, k;
    for(i=0; i<=4; i++)
    {
        for(j=0; j<i; j++)
            printf("  ");
        for(j=0; j<4-i; j++)
            printf("%c ",65+j);
        for(j=4-i-2; j>=0;j--)
            printf("%c ", 65+j);

        printf("\n");

    }
return 0;
}
/*output: 
A B C D C B A
  A B C B A
    A B A
      A
      */