#include <stdio.h>
#include <stdlib.h>

// Function prototype
int* get_middle_row(int arr[][4], int rows, int num_cols);

int main() {
    int arr[5][4] = {  // Example 2D array with 5 rows and 4 columns
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}
    };

    int num_cols = 4;
    int* middle_row = get_middle_row(arr, 5, num_cols);


        printf("Middle row: ");
        for (int i = 0; i < num_cols; i++) {
            printf("%d ", middle_row[i]);
        }
        printf("\n");


        free(middle_row);
  

    return 0;
}

int* get_middle_row(int arr[][4], int rows, int num_cols) {
    
    int middle = rows / 2;

   
    int* middle_row = malloc(num_cols * sizeof(int));
    
    for (int i = 0; i < num_cols; i++) {
        middle_row[i] = arr[middle][i];
    }

    return middle_row;
}
