//9
#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    float root;


    printf("Enter any number to find square root: ");
    scanf("%d", &num);

    root = sqrt(num);

    printf("Square root of %d = %.3f", num, root);
}

