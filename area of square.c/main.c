#include <stdio.h>
int main ()
{
    int side;
    float formulae;

    printf("Enter the value of side of an square: ");
    scanf("%d", &side);

    formulae = side*side;

    printf("The area of an square is: %f", formulae);
    return 0;
}
