#include <stdio.h>
#include <stdlib.h>

// Function prototype for 'print_array'
void print_array(int parray[], int size);

int main(void){
    // Declaration of variables
    int arr_size1; // Size of the original array
    int nums1[] = {1, 5, 7, 9, 11, 13}; // Declaration and initialization of the original array 'nums1'

    // Calculating the size of the original array
    arr_size1 = sizeof(nums1)/sizeof(nums1[0]);

    // Printing elements in the original array
    printf("Elements in original array1 are: ");
    print_array(nums1, arr_size1);

    // Declaration of the result array with the same size as the original array
    int result[arr_size1];

    // Copying elements from 'nums1' to 'result'
    for (int i = 0; i < arr_size1; i++) {
        result[i] = nums1[i];
    }

    // Swapping the first and last elements
    int first = nums1[0];
    result[0] = nums1[arr_size1 - 1];
    result[arr_size1 - 1] = first;

    // Printing elements in the new array after swapping
    printf("New array, after swapping first and last elements: ");
    print_array(result, arr_size1);
}

// Definition of the 'print_array' function
void print_array(int parray[], int size)
{
    int i;
    for( i=0; i<size-1; i++)
    {
        // Printing each element with a comma and a space
        printf("%d, ", parray[i]);
    }
    // Printing the last element without a comma and space
    printf("%d ", parray[i]);
    // Printing a new line to separate the elements
    printf("\n");
}
