#include<stdio.h>
struct players{

    char name[20];
    char team[20];
    float avg;

} p[20], temp;
main()
{

    int n, i, j;
    printf("Enter Number of players: ");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("\nEnter player name:  ");
        scanf("%s", &p[i].name);
        printf("\nEnter Team name: ");
        scanf("%s", &p[i].team);
        printf("\nEnter batting average: ");
        scanf("%f", &p[i].avg);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(p[j].avg<p[j+1].avg)
            {
                temp= p[j];
                p[j]= p[j+1];
                p[j+1]= temp;
            }
        }
    }
    printf("\n\n----------------------------------------------\n");
    printf("Player name\tTeam name\tBatting Average\n");
    printf("\n\n----------------------------------------------\n");
    for(i=0; i<n; i++)
    {
        printf("%s\t%s\t%f\n", p[i].name, p[i].team, p[i].avg);
    }
}
