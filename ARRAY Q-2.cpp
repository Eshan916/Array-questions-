// Count the number of positive and negative numbers
#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], result[2] = {0, 0}; // result[0] is positive, result[1] is negative

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0)
            result[0]++;
        else if (arr[i] < 0)
            result[1]++;
    }

    printf("Number of positive numbers: %d\n", result[0]);
    printf("Number of negative numbers: %d\n", result[1]);

    return 0;
}


