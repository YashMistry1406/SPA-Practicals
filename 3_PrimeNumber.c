/*#include <stdio.h>
int main()
{
    int n, i, flag = 0;

    printf("Enter a Number: ");
    scanf("%d", &n);

    for(i = 2; i <= n/2; ++i)
    {

        if(n%i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 1)
    {
      printf("1 is neither a prime nor a composite number.");
    }
    else if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);




    return 0;
}*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number : ");
	scanf("%d",&n);
	int i,j,arr[n];
	
	for(i=1; i<=n; i++)
	{
		arr[i]=1;
	}
	
	for(i=2; i*i<=n; i++)
	{
		if(arr[i]==1)
		{
			for(j=i*i; j<=n; j+=i)
			{
				arr[j]=0;
			}
		}
	}
	for(i=2; i<n; i++)
	{
		if(arr[i]==1)
			printf("%d\t",i);
	}	
}
