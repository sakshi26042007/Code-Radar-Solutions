#include <stdio.h>

int main() {
    char world[100];  // Array to store the input word

    // Taking input using scanf
    printf("A single world: ");
    scanf("%s", world);

    // Printing the word using printf
    printf("You entered: %s\n", world);

    return 0;
}