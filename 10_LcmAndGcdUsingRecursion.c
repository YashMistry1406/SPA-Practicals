#include<stdio.h>
int gcd(int , int );
int lcm(int , int );
int main()
{
    int Gcd, Lcm, n1, n2;
    printf("Enter two numbers: \n");
    scanf("%d %d", &n1, &n2);
    Lcm= lcm(n1, n2);
    Gcd= gcd(n1, n2);
    //Lcm= (n1*n2)/ Gcd;
    printf("\nLCM= %d", Lcm);
    printf("\nGCD= %d", Gcd);
    return  0;

}
int lcm(int a, int b)
{
    static int  k=2;
    if((k%a==0)&& (k%b==0))
       return k;
    k++;
    lcm(a, b);
    return k;
}



int gcd(int a, int b){
    while(a!=b)
    {
        if(a>b)
            return gcd(a-b,b);
        else
            return gcd(a, b-a);
    }

}



