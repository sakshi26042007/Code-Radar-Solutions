#include <stdio.h>

#define PI 3.14  // Define the value of PI

int main() {
    float radius, area;
    scanf("%f", &radius);
    area = PI * radius * radius;

    // Print the area
    printf("Area: %.2f\n", area);

    return 0;
}