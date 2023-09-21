#include <stdio.h>

void selectionSort(int arr[], int size) {
    int minIndex, temp,i,j;

    for ( i = 0; i < size - 1; i++) {
        minIndex = i;

        // Minimum öðeyi bul
        for ( j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap arr[i] and arr[minIndex]
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int size,i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the array elements:\n");
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Selection Sort'u çaðýrarak diziyi sýrala
    selectionSort(arr, size);

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");

    return 0;
}

