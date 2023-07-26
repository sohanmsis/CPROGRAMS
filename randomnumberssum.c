#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;
    int sum = num1 + num2;
    printf("Random Number 1: %d\n", num1);
    printf("Random Number 2: %d\n", num2);
    printf("Sum: %d\n", sum);

    return 0;
}
