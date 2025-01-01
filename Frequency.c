#include <stdio.h>

int main() {
    int n, i, j, count;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], freq[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize frequency array
    }

    for (i = 0; i < n; i++) {
        count = 1; // Initialize count for arr[i]
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark element as visited
            }
        }
        if (freq[i] != 0) {
            freq[i] = count; // Store the frequency of arr[i]
        }
    }

    printf("Frequency of elements:\n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    return 0;
}
