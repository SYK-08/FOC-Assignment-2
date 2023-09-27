#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the length of the first side: ");
    scanf("%f", &side1);
    printf("Enter the length of the second side: ");
    scanf("%f", &side2);
    printf("Enter the length of the third side: ");
    scanf("%f", &side3);

    if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        printf("These sides form a valid triangle.\n");
    } 
    else {
        printf("These sides do not form a valid triangle.\n");
    }

    return 0;
}
