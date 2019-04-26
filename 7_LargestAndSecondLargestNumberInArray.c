#include<stdio.h>
int main()
{
    int a[20], i, n, flag=0, temp;
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    printf("Enter elements: \n");
    for(i=0; i<n; i++)
    {
        printf("\nEnter a value: ");
        scanf("%d", &a[i]);
    }
    while(1)
    {
        flag=0;
        for(i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                temp= a[i];
                a[i]= a[i+1];
                a[i+1]= temp;
                flag=1;
            }
        }
        if(!flag)
        {
            break;
        }
    }
    printf("\nLargest element: %d\n", a[n-1]);
    printf("Second largest element: %d", a[n-2]);
    return 0;
}
