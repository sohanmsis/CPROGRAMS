#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1; 
    }
    
    int result = 1 << n;
    
    printf("2^%d = %d\n", n, result);
    
    return 0; 
}
