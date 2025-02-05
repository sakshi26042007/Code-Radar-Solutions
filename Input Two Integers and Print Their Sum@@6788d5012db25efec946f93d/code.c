#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Take input for two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate their sum
    sum = num1 + num2;

    // Print the sum
    printf("The sum is: %d\n", sum);

    return 0;
}