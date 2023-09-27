#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitOrLoss;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    profitOrLoss = sellingPrice - costPrice;

    if(profitOrLoss > 0) {
        printf("Profit: %f\n", profitOrLoss);
    } 
    else if(profitOrLoss < 0) {
        printf("Loss: %f\n", -profitOrLoss);
    } 
    else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
