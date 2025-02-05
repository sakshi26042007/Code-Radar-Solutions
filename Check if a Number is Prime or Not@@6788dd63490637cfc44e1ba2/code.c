#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Taking input
    if (scanf("%d", &n) != 1) {
        printf("Not Prime\n");
        return 1;
    }

    // A prime number must be greater than 1
    if (n <= 1) {
        printf("Not Prime\n");
        return 0;
    }

    // Check divisibility from 2 to sqrt(n)
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Print the result
    if (isPrime)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}