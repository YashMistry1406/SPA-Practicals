#include<stdio.h>
int swap(int *a, int *b)
{
    int temp;
    temp =*a;
    *a=*b;
    *b= temp;

}
int main()
{
    int a, b;
    a=10;
    b= 20;
    printf("Before swapping: \na = %d\nb = %d\n", a, b);
    swap(&a, &b);
    printf("After swapping: \na = %d\nb = %d\n", a, b);
return 0;

}
