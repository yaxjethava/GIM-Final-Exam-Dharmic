#include <stdio.h>

int main() {
    int arr[100];

    int n, i, max, sum = 0;


    printf("Enter the number of elements : ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }

    printf("Maximum number: %d\n", max);
    printf("Sum of numbers: %d\n", sum);

    return 0;
}
