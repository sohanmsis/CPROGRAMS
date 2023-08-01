#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0; 

    
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return 0; 
    }

    return 1; 
}

int main() {
    int n, count = 0, num = 2;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("First %d prime numbers are: ", n);

    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            ++count;
        }
        ++num;
    }

    printf("\n");

    return 0;
}
