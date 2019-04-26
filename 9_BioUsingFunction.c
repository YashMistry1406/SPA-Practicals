#include<stdio.h>
int fact(int n)
{
    int i, result=1;
    while(n!=0)
    {
        result*=n;
        n--;
    }
    return result;
}
main()
{
    int bio, n, r;
    printf("Enter the value of n and r\n");
    scanf("%d %d", &n, &r);
    bio= (fact(n))/ ((fact(r))*(fact(n-r)));
    printf("\n\nBIO= %d", bio);


}
