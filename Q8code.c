//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int n, sum = 0, i;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Indicate an error
    }

    for (i = 1; i <= n; i++) {
        sum += i; // Add the current number to the sum
    }
    
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0; // Indicate successful execution
}
