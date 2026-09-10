// how to find the area of an rectangle
#include <stdio.h>
int main ()
{
    int length,breadth;
    float formulae;

    printf("Enter the values of length: ");
    scanf("%d", &length);

    printf("Enter the value of breadth: ");
    scanf("%d", &breadth);

    formulae = length*breadth;

    printf("The area of the rectangle is: %f", formulae);

    return 0;
}
