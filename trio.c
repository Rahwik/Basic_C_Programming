#include <stdio.h>

int main() {
    float base, height, area;

    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);

    area = 0.5 * base * height;

    printf("The area of the triangle is %.2f\n", area);

    return 0;
}