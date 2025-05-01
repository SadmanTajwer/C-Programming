#include 
#include 
int main() {
    
    long int n1, n5, p = 1;
    long int dec = 0, i;
    long int binno = 0;
   
    printf("\n\nConvert Octal to Binary:\n");
    printf("-------------------------\n");
    
    printf("Input an octal number (using digits 0 - 7): ");
    scanf("%ld", &n1);
    
    n5 = n1;
   
    for (i = 0; n1 > 0; n1 = n1 / 10, i++) {
        
        long int d = n1 % 10;
        // Update power of 8
        p = pow(8, i);
        // Add digit * power of 8 to result
        dec += d * p;
    }
   
    for (i = 1; dec > 0; dec = dec / 2, i *= 10) {
        // Get remainder and add to result
        binno += (dec % 2) * i;
    }
    // Print octal and binary result
    printf("\nThe Octal Number: %ld\nThe equivalent Binary Number: %ld\n\n", n5, binno);
    return 0; 
}
