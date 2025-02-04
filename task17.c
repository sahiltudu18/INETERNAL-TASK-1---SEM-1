//2. Reverse the elements in the array. 

#include <stdio.h>

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1, temp;

    
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
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

    
    reverseArray(arr, n);

    
    printf("Reversed array: ");
    printArray(arr, n);

    return 0;
}
