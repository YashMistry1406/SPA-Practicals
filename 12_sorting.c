#include<stdio.h>
void sort(int a[], int n)
{
    int i, flag=0, temp;
    while(1)
    {
        flag=0;
        for(i=0;i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                temp= a[i];
                a[i]= a[i+1];
                a[i+1]= temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }

}
main()
{
    int a[20], n, i;
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    printf("Enter elements:");
    for(i=0; i<n; i++)
    {
        printf("\nEnter a value: ");
        scanf("%d", &a[i]);
    }
    sort(a, n);
    printf("\nAfter sorting: \n");
    for(i=0; i<n; i++)
        printf("%d\n", a[i]);
return 0;
}
