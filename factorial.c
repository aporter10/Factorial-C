#include <stdio.h>

// Function declarations
long long factorial_iterative(int n);
long long factorial_recursive(int n);

// Iterative function to calculate factorial
long long factorial_iterative(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Recursive function to calculate factorial
long long factorial_recursive(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial_recursive(n - 1);
}

int main() {
    int num;

    // Asking the user to input a number
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative numbers doesn't exist.\n");
    } else {
        // Using iterative approach
        printf("Iterative factorial of %d: %lld\n", num, factorial_iterative(num));

        // Using recursive approach
        printf("Recursive factorial of %d: %lld\n", num, factorial_recursive(num));
    }

    return 0;
}
