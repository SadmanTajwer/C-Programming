#include <stdio.h>
#define MAX_SIZE 100 // Define the maximum size of the queue

int queue[MAX_SIZE]; 
int front = -1; 
int back = -1; 


void enqueue(int item) {
    if (back == MAX_SIZE - 1) { 
        printf("Error: Queue is full\n"); 
        return; 
    }
    if (front == -1) { 
        front = 0; 
    }
    back++; 
    queue[back] = item; 
}

// Function to display the elements in the queue
void display() {
    if (front == -1 || front > back) { // Check if the queue is empty
        printf("Queue is empty\n"); // Print message if queue is empty
        return; // Return from the function
    }
    printf("Queue elements are: "); // Print message to display queue elements
    for (int i = front; i <= back; i++) { // Iterate over the queue elements
        printf("%d ", queue[i]); // Print each element of the queue
    }
    printf("\n"); // Print newline after displaying all elements
}

// Function to check whether the queue is empty
int is_empty() {
    if (front == -1 || front > back) { // Check if the queue is empty
        return 1; // Return 1 if queue is empty
    }
    return 0; // Return 0 if queue is not empty
}

int main() {
    printf("Initialize a queue!"); // Print message to indicate initializing a queue
    // Insert some elements into the queue.
    printf("\nCheck the queue is empty or not? %s\n", is_empty() ? "Yes" : "No"); // Print message to check if queue is empty
    printf("\nInsert some elements into the queue:\n"); // Print message to indicate inserting elements into the queue
    enqueue(1); // Insert element 1 into the queue
    enqueue(2); // Insert element 2 into the queue
    enqueue(3); // Insert element 3 into the queue
    display(); // Display the elements of the queue
    printf("\nInsert another element into the queue:\n"); // Print message to indicate inserting another element
    enqueue(4); // Insert element 4 into the queue
    display(); // Display the elements of the queue
    printf("\nCheck the queue is empty or not? %s\n", is_empty() ? "Yes" : "No"); // Print message to check if queue is empty
    return 0; // Return from the main function
}


