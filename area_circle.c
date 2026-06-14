/* functions area circle */

#include <stdio.h>

int area_circle (int radius){
    float pi, area;

    pi = 3.142;
    area = (radius * radius) * pi;

    return area;
}

int main() {
    int a,r;

    printf("Radius: ");
    fflush(stdout);
    scanf("%d", &r);

    a = area_circle(r);
    printf("The area is %d\n", a);


    return 0;
}