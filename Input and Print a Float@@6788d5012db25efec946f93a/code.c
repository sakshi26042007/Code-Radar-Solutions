#include <stdio.h>

int main() {
    float number;  
    
    // Take input from the user
    printf("Enter a floating-point number: ");
    scanf("%f", &number);
    
    // Print the entered floating-point number
    printf("You entered: %.2f\n", number);  // Using %.2f to print with 2 decimal places
    
    return 0;
}