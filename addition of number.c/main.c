#include <stdio.h>
int main()
{
    float a,b,formulae;

    printf("Enter the first value: ");
    scanf("%f",&a);

    printf("Enter the second value: ");
    scanf("%f",&b);

    formulae = a + b;
    printf("The sum of two values are: %.3f",formulae);
    return 0;
}
