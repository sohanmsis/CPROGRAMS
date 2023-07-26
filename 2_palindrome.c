#include <stdio.h>

int isPalindrome(int number) {
    int originalNumber = number;
    int reverse = 0;

    while (number != 0) {
        int lastDigit = number % 10;
        reverse = reverse * 10 + lastDigit;
        number /= 10;
    }

    return originalNumber == reverse;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
