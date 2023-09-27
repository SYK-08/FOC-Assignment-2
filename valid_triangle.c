#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    printf("Enter the first angle: ");
    scanf("%f", &angle1);
    printf("Enter the second angle: ");
    scanf("%f", &angle2);
    printf("Enter the third angle: ");
    scanf("%f", &angle3);

    if(angle1 + angle2 + angle3 == 180) {
        printf("These angles form a valid triangle.\n");
    } 
    else{
        printf("These angles do not form a valid triangle.\n");
    }
    
    return 0;
}
