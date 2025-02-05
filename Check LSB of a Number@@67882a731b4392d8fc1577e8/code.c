#include <stdio.h>

int main() {
    int num;

    // Reading an integer from input
    scanf("%d", &num);

    // Checking LSB using bitwise AND
    if (num & 1) {
        printf("LSB is Set (1)\n");
    } else {
        printf("LSB is Not Set (0)\n");
    }

    return 0;
}