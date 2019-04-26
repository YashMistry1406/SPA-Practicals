#include<stdio.h>
int main()
{
    int n, a[20],  i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *ptr= &a[0];
    printf("Enter the elements of the array: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", ptr);
        ptr++;
    }
    printf("The elements of the array in reverse order is : \n");
    ptr= &a[n-1];
    for(i=0; i<n; i++)
    {
        printf("%d\n", *ptr);
        ptr--;
    }
    return 0;
}
/*Output:
Enter the size of the array: 5
Enter the elements of the array:
1
2
3
56
2
The elements of the array in reverse order is :
2
56
3
2
1
*/
