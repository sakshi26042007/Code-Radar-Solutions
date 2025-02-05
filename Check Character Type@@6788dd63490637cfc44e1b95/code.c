#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    
    scanf("%c", &ch);

    // Convert to lowercase to handle uppercase vowels
    char lowerCh = tolower(ch);

    // Check if it's a vowel
    if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
        printf("Vowel\n");
    }
    // Check if it's a consonant (must be a letter but not a vowel)
    else if (isalpha(ch)) {
        printf("Consonant\n");
    }
    // Check if it's a digit
    else if (isdigit(ch)) {
        printf("Digit\n");
    }
    // If it's not a letter or digit, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}