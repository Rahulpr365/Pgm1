#include <stdio.h>
int binarySearch(int array[], int x, int low, int high);

int main(void) {
    int a[100], n, low = 0, high, i, element;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    printf("Enter the Elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the element to be searched: ");
    scanf("%d", &element);
    
    high = n - 1; // Initialize high after reading n
    int result = binarySearch(a, element, low, high);
    
    if (result == -1) {
        printf("Not found\n");
    } else {
        printf("Element is found at index %d\n", result);
    }
    
    return 0;
}

int binarySearch(int array[], int x, int low, int high) {
    // Repeat until the pointers low and high meet each other
    while (low <= high) {
        int mid = (low + high) / 2;
        if (x == array[mid])
            return mid;
        if (x > array[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
