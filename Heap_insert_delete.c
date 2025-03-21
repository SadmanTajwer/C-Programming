#include <stdio.h>          // Include the standard input/output library for printf function
#include <stdlib.h>         // Include the standard library for dynamic memory allocation

#define MAX_HEAP_SIZE 100   // Define the maximum size of the heap

// Structure to represent a heap
struct Heap {
    int arr[MAX_HEAP_SIZE]; // Array to store heap elements
    int size;               // Current size of the heap
};

// Function to swap two elements in the heap
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to maintain the max heap property after an element is inserted
void heapifyUp(struct Heap *heap, int index) {
    int parent = (index - 1) / 2;  // Calculate the parent index

    // Move up the heap until the max heap property is restored
    while (index > 0 && heap->arr[index] > heap->arr[parent]) {
        swap(&heap->arr[index], &heap->arr[parent]);  // Swap the current node with its parent
        index = parent;
        parent = (index - 1) / 2;  // Update the parent index
    }
}

// Function to insert an element into the heap
void insert(struct Heap *heap, int key) {
    if (heap->size >= MAX_HEAP_SIZE) {
        printf("Heap overflow\n");   // Display an error message if the heap is full
        return;
    }

    heap->arr[heap->size] = key;     // Insert the key at the end of the heap
    heap->size++;                    // Increase the size of the heap

    heapifyUp(heap, heap->size - 1);  // Restore the max heap property
}

// Function to maintain the max heap property after an element is deleted
void heapifyDown(struct Heap *heap, int index) {
    int leftChild = 2 * index + 1;   // Calculate the left child index
    int rightChild = 2 * index + 2;  // Calculate the right child index
    int largest = index;              // Assume the current node is the largest

    // Find the largest element among the current node, left child, and right child
    if (leftChild < heap->size && heap->arr[leftChild] > heap->arr[largest]) {
        largest = leftChild;
    }

    if (rightChild < heap->size && heap->arr[rightChild] > heap->arr[largest]) {
        largest = rightChild;
    }

    // If the largest element is not the current node, swap with the largest child and continue heapifying down
    if (largest != index) {
        swap(&heap->arr[index], &heap->arr[largest]);
        heapifyDown(heap, largest);
    }
}

// Function to delete the root element (maximum element) from the heap
int deleteMax(struct Heap *heap) {
    if (heap->size <= 0) {
        printf("Heap underflow\n");  // Display an error message if the heap is empty
        return -1;                   // Return -1 to represent an error or empty heap
    }

    int maxElement = heap->arr[0];   // Save the maximum element
    heap->arr[0] = heap->arr[heap->size - 1];  // Replace the root with the last element
    heap->size--;                    // Decrease the size of the heap

    heapifyDown(heap, 0);            // Restore the max heap property from the root

    return maxElement;               // Return the deleted maximum element
}

// Function to display the elements of the heap
void display(struct Heap *heap) {
    printf("Heap elements: ");
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", heap->arr[i]);  // Print each element in the heap
    }
    printf("\n");
}

int main() {
    struct Heap heap;                 // Declare a heap structure
    heap.size = 0;                    // Initialize the heap size

    // Test insert operation
    insert(&heap, 100);
    insert(&heap, 200);
    insert(&heap, 150);
    insert(&heap, 400);
    insert(&heap, 500);

    // Display the heap
    display(&heap);

    // Test delete operation
    int maxElement = deleteMax(&heap);
    if (maxElement != -1) {
        printf("Deleted max element: %d\n", maxElement);
    }

    // Display the updated heap
    display(&heap);

    return 0;                         // Return 0 to indicate successful execution
}
