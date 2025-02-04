//3. Swipe the odd and even elements of an aaray.

#include <stdio.h>

void swapOddEven(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; 

    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    swapOddEven(arr, n);

    
    printf("Array after swapping odd and even positions: ");
    printArray(arr, n);

    return 0;
}
