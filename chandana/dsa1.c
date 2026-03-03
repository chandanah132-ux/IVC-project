#include <stdio.h>

// Recursive function to find nth Fibonacci number
int fibonacci(int n)
{
    // Base condition
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;

    // Recursive case
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Fibonacci is not defined for negative numbers.\n");
    }
    else
    {
        printf("The %dth Fibonacci number is: %d\n", n, fibonacci(n));
    }

    return 0;
}
