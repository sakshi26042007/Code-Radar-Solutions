#include <stdio.h>

int main() {
    int a,b,c;
    printf("Enter the length of side 1: ");
    scanf("%d", &a);
    printf("Enter the length of side 2: ");
    scanf("%d", &b);
    printf("Enter the length of side 3: ");
    scanf("%d", &c);

    if (a==b && b==c) {
        printf("The triangle is Equilateral.\n");
    }
    else if (a == b || b == c || a == c) {
        printf("The triangle is Isosceles.\n");
    }
    else {
        printf("The triangle is Scalene.\n");
    }

    return 0;
}