#include <stdio.h>

int main() {
    int num, n;

    // Reading the number and bit position from the user
    scanf("%d %d", &num, &n);

    // Clearing the nth bit
    int result = num & ~(1 << n);

    // Printing the result
    printf("%d\n", result);

    return 0;
}