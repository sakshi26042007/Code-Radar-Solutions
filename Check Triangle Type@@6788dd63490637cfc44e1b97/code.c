#include <stdio.h>

int main() {
    int a,b,c;
    
    scanf("%d", &a,&b,&c);

    if (a==b && b==c) {
        printf("TEquilateral\n");
    }
    else if (a == b || b == c || a == c) {
        printf(" Isosceles\n");
    }
    else {
        printf("Scalene\n");
    }

    return 0;
}