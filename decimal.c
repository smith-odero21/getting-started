
/* float and double */
#include <stdio.h>

int main() {

    // area
    // radius * radius * PI
    float pi, r, area;

    pi = 3.142;
    printf("What is the radius in cm?\n");
    scanf("%f", &r);

    area = r * r * pi;
    printf("The area is %fcm\n", area);

    return 0;
}