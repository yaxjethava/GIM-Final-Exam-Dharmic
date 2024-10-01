
#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) { // Loop for each row
        for (int j = 0; j <= i; j++) { // Loop for each column in the row
            printf("%d ", rows - j); // Print the descending numbers
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
