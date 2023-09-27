#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the length of the first side: ");
    scanf("%f", &side1);
    printf("Enter the length of the second side: ");
    scanf("%f", &side2);
    printf("Enter the length of the third side: ");
    scanf("%f", &side3);

    if(side1 == side2 && side2 == side3) {
        printf("It is an equilateral triangle.\n");
    }
    else if(side1 == side2 || side1 == side3 || side2 == side3) {
        printf("It is an isosceles triangle.\n");
    }
    else {
        printf("It is a scalene triangle.\n");
    }

    return 0;
}
