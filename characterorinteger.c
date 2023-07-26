#include <stdio.h>
#include <ctype.h>
int main() {
    char input;
    printf("Enter a character or an integer within the range 0-9: ");
    scanf("%c", &input);
    if (!isdigit(input)) {
        printf("Input is a character: %c\n", input);
    } else {
        int number = input - '0';
        if (number >= 0 && number <= 9) {
            printf("Input is an integer: %d\n", number);
        } else {
            printf("Invalid input. Please enter a character or an integer within the range 0-9.\n");
        }
    }

    return 0;
}
