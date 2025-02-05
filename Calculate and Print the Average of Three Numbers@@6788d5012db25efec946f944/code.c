#include <stdio.h>

int main() {
    float num1, num2, num3, Average;
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculate the average
    Average = (num1 + num2 + num3) / 3;

    // Print the average
    printf(" Average: %.2f\n", Average);

    return 0;
}