#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is a power of three
static bool is_PowerOf_Three(int n) {
#if 0 // Alternative approach using recursive function
    if (n == 1) return true; 
    if (n == 0 || n % 3) return false; 
    return is_PowerOf_Three(n / 3); 
#else 
    return (n > 0 && (1162261467 % n) == 0); /
#endif
}

// Main function to test the is_PowerOf_Three function with different numbers
int main(void) {
    int n = 9;
    printf("\nIf %d is a power of three? %d", n, is_PowerOf_Three(n));
    n = 81;
    printf("\n\nIf %d is a power of three? %d", n, is_PowerOf_Three(n));
    n = 45;
    printf("\n\nIf %d is a power of three? %d", n, is_PowerOf_Three(n));
    return 0;
}
