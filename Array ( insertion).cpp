#include <stdio.h>

int main() {
    int arr[10];  // array of size 10
    int n, i;

    printf("How many elements? "); // take maximun elements to be 10 
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the new element to add at the end: ");
    scanf("%d", &arr[n]);  // insert at end
    n++;  // increase count

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

