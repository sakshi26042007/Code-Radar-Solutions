#include <stdio.h>

int toggle_nth_bit(int number, int n) {
    // Toggle the nth bit using XOR
    return number ^ (1 << n);
}

int main() {
    int number, n;
    
    // Take input from the user
    printf("Enter the number: ");
    scanf("%d", &number);
    printf("Enter the bit position to toggle: ");
    scanf("%d", &n);
    
    // Toggle the nth bit
    int result = toggle_nth_bit(number, n);
    
    printf("Output: %d\n", result);
    
    return 0;
}