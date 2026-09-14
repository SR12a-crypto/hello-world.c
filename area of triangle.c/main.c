#include <stdio.h>
int main()
{
    float l,b,formulae;

    printf("Enter the length of the trianlge: ");
    scanf("%f",&l);

    printf("Enter the breadth of the triangle: ");
    scanf("%f", &b);

    formulae = 0.5*(l * b);

    printf("The area of the triangle is: %f", formulae);
    return 0;
}
