/* area of a triangle 
    [1/2 * base * height ]

*/
#include <stdio.h>

int main() {

    float area, base , height;

    printf("What is the base ?\n");
    scanf("%f", &base);

    printf("What is the height ?\n");
    scanf("%f", &height);

    area = ((0.5 * base) * height);
    printf("The area is %.2fcm\n", area);

    return 0;
}