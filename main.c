#include <stdio.h>

int main() {
    float x;
    float y;
    printf("Enter a number: ");
    scanf("%f", &x);
    y = (3*x)/(x + 4);
    printf("y: %f\n", y);
    return 0;
}
