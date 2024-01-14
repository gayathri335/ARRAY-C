#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,j;
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {6, 7, 8, 9, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    // Resize arr1 to accommodate both arrays
    //realloc is used to resize the arr[1] to accomodate the arr[2] in arr[1].
    arr1 = realloc(arr1, (size1 + size2) * sizeof(int));

    // Merge arr2 into arr1
    //int i = size1: Initializes the loop variable i to the value of size1, which is the starting index in arr1 where the elements from arr2 will be inserted.
	//j = 0: Initializes the loop variable j to zero. This is important because you want to start copying elements from the beginning of arr2 (at index 0) into arr1.
    for (i = size1, j = 0; i < size1 + size2; i++, j++) {
        arr1[i] = arr2[j];
    }

    printf("Merged Array: ");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", arr1[i]);
    }

    return 0;
}

