#include <stdio.h>

int binaryToDecimal(int binaryNum) {
    int decimalNum = 0, base = 1, remainder;

    while (binaryNum > 0) {
        remainder = binaryNum % 10;
        decimalNum += remainder * base;
        binaryNum /= 10;
        base *= 2;
    }

    return decimalNum;
}

int main() {
    int binaryNum;

    printf("Enter a binary number: ");
    scanf("%d", &binaryNum);

    int decimalNum = binaryToDecimal(binaryNum);
    printf("Decimal equivalent: %d\n", decimalNum);

    return 0;
}
