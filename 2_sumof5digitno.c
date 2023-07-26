#include <stdio.h>

int main() {
    int number, originalNumber, digit, sum = 0;

    printf("Enter a 5-digit number: ");
    scanf("%d", &number);
    if (number < 10000 || number > 99999) {
        printf("Invalid input. Please enter a 5-digit number.\n");
        return 1; // Exit the program with an error code
    }

    originalNumber = number;
    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }
    printf("Original Number: %d\n", originalNumber);
    printf("Sum of its digits: %d\n", sum);

    return 0;
}
