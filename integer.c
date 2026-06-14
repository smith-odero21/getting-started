#include <stdio.h>

int main() {
    int x, y, result;

    printf("Input a number\n");
    scanf("%d", &x);

    printf("Input another number\n");
    scanf("%d", &y);

    result = x + y;
    printf("The result is %d\n", result);

    return 0;
}