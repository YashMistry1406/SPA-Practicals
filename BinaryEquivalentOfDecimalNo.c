
#include <stdio.h>

void main()
{
    long num, temp, remainder, base = 1, binary = 0;

    printf("Enter a decimal integer \n");
    scanf("%ld", &num);
    temp = num;
    while (num > 0)
    {
        remainder = num % 2;

        binary = binary + remainder * base;
        num = num / 2;
        base = base * 10;
    }

    printf("Binary equivalent of %d  = %ld\n", temp, binary);

}
