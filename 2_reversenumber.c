#include <stdio.h>

int main() {
    int number, originalNumber, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    // Print the reversed number
    printf("Original Number: %d\n", originalNumber);
    printf("Reversed Number: %d\n", reverse);

    return 0;
}
