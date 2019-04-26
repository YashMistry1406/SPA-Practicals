#include<stdio.h>
#include<string.h>
main()
{
    char  a[100], fname[20], mname[20], lname[20];
    
    puts("Enter First name");
    scanf("%s", &fname);
    puts("Enter middle name");
    scanf("%s", &mname);
    puts("Enter last name ");
    scanf("%s", &lname);
    strcat(a, fname);
    strcat(a, " ");
    strcat(a, mname);
    strcat(a, " ");
    strcat(a, lname);
    printf("Hello, %s", a);

}
