
#include <stdio.h>
#define str_size 100 // Declare the maximum size of the string

// Function to compare two strings
int test(char* s1, char* s2) {
    int flag = 0; 

    
    while (*s1 != '\0' || *s2 != '\0') {
        if (*s1 == *s2) { 
            s1++; 
            s2++; 
        } else if ((*s1 == '\0' && *s2 != '\0') || (*s1 != '\0' && *s2 == '\0') || *s1 != *s2) {
            
            flag = 1; 
            break;
        }
    }
    return flag; 
}

// Main function
int main(void) {
    char str1[str_size], str2[str_size]; 
    int flg = 0; // Initialize a flag variable

    printf("\nInput the 1st string : ");
    fgets(str1, sizeof str1, stdin); 
    printf("Input the 2nd string : ");
    fgets(str2, sizeof str2, stdin); 

    printf("\nString1: %s", str1); 
    printf("String2: %s", str2); 

    flg = test(str1, str2); 

    // Display the comparison result based on the flag value
    if (flg == 0) {
        printf("\nStrings are equal.\n");
    } else if (flg == 1) {
        printf("\nStrings are not equal.");
    }

    return 0; // Return 0 to indicate successful program execution
}
