#include <stdio.h>

int main() {
    int num, n;

    // Reading the number and bit position from the user
    scanf("%d %d", &num, &n);

    // Using bitwise AND to check the nth bit
    int result = (num >> n) & 1;

    // Printing the result
    printf("%d\n", result);

    return 0;
}