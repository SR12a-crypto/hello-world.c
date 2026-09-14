#include <stdio.h>
int main()
{
    int principal_amt,time_period;
    float intrest,formulae;

    printf("Enter the principal amount: ");
    scanf("%d",&principal_amt);

    printf("Enter the time period: ");
    scanf("%d",&time_period);

    printf("Enter the rate of intrest: \n");
    scanf("%f",&intrest);

    formulae = (principal_amt*time_period*intrest)/100;

    printf("The simple intrest of your loan is: %f", formulae);
    return 0;
}
