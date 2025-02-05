#include <stdio.h>

int main() {
    int month;

    // Taking input
    if (scanf("%d", &month) != 1) {
        printf("Invalid month\n");
        return 1;
    }

    // Checking number of days in the given month
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31\n");
            break;
        case 4: case 6: case 9: case 11:
            printf("30\n");
            break;
        case 2:
            printf("28\n"); // Assuming February has 28 days
            break;
        default:
            printf("Invalid month\n"); // Handling invalid input
    }

    return 0;
}