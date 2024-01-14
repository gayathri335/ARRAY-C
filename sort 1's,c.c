#include <stdio.h>

void sort012(int arr[], int size) {
    int low = 0;
    int high = size - 1;
    int mid = 0;
    int temp;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                // Swap arr[low] and arr[mid]
                 temp = arr[low];
                arr[low] = arr[mid];
                arr[mid] = temp;
                low++;
                mid++;
                break;
            case 1:
                // No action needed for 1, move to the next element
                mid++;
                break;
            case 2:
                // Swap arr[mid] and arr[high]
                temp = arr[mid];
                arr[mid] = arr[high];
                arr[high] = temp;
                high--;
                break;
        }
    }
}

int main() {
	int i;
    int arr[] = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, size);

    printf("Sorted Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

