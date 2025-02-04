#include <stdio.h>

int main() {
    float number;  // Variable to store the input number
    
    // Prompt user for input
    printf("Enter a floating-point number: ");
    scanf("%f", &number);  // Take the input number
    
    // Print the entered number
    printf("You entered: %f\n", number);  // Print the number exactly as it is
    
    return 0;
}