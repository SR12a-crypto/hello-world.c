#include <stdio.h>

int main()
{
    float a, b, c, average;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    average = (a + b + c) / 3;

    printf("Average = %.2f\n", average);

    if (average >= 50)
    {
        printf("Average is 50 or above");
    }
    else
    {
        printf("Average is below 50");
    }

    return 0;
}
