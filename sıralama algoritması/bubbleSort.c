#include <stdio.h>

void bubbleSort(int arr[], int size) {
    int temp;
    int swapped;
    int i;
    int j;

    for (i = 0; i < size - 1; i++) {
        swapped = 0;

        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }

        
        if (swapped == 0)
            break;
    }
}

int main() {
    int size;
    int i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array elements:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    
    bubbleSort(arr, size);

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}

