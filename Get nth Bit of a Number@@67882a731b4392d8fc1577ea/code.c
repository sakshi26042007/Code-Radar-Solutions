#include <stdio.h>

int main() {
    int num, n, result;

    // Reading the number and the bit position
    scanf("%d %d", &num, &n);

    // Checking the nth bit
    result = (num >> (n - 1)) & 1;

    // Printing the result
    printf("The %dth bit is: %d\n", n, result);

    return 0;
}