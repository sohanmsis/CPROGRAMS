#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int orgNum, remainder, n = 0, result = 0;

    orgNum = num;
    while (orgNum != 0) {
        orgNum /= 10;
        ++n;
    }

    originalNum = num;
    while (orgNum != 0) {
        remainder = orgNum % 10;
        result += pow(remainder, n);
        orgNum /= 10;
    }
    if (result == num)
        return 1; // True, it's an Armstrong number
    else
        return 0; // False, it's not an Armstrong number
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
