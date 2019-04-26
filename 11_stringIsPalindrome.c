#include<stdio.h>
int main()
{
    char a[20];
    int len, i=0, flag=0, j;
    printf("Enter String: ");
    scanf("%s", &a);
    while(a[i]!='\0')
    {
        i++;
    }
    len= i-1;
    for(i=0, j=len; i<(len)/2;i++, j--)
    {   flag=0;
        if(a[i]!=a[j])
        {
            flag=1;
            break;
        }

    }
    if(flag==1)
    {
        printf("\n%s is not a palindrome", a);
    }
    else
        printf("\n%s is a palindrome", a);

}
