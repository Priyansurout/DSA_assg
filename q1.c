// 2D TO 1D and swap it


#include <stdio.h>


int swap_array(int *arr1, int *arr2);
int main() {

    int ARRY_SIZE = 40;
    int ROW = 2;
    int COL = 4;

    int one_arr[ARRY_SIZE];

    for (int i=0; i<ARRY_SIZE; i++){
        one_arr[i] = i+1;
    }

    int *twoD_array[5];

    for (int i=0; i<5; i++){
        twoD_array[i] = one_arr + i * (ROW * COL);
    }


    printf("Print the one d ARRAY\n");
    for (int i=0; i<ARRY_SIZE; i++){
        printf("%d ",one_arr[i]);
    }
    printf("\n");

    swap_array(twoD_array[3], twoD_array[0]);

    printf("Print the 2D array: \n");
    for (int k=0; k<5; k++){
        printf("\n");
        for (int i=0; i<ROW; i++){
            printf("\n");
            for (int j=0; j<COL; j++){
                printf("%d ", *(twoD_array[k] + i*COL + j));
            }
        }
    }
     printf("\n");

    return 0;


}

int swap_array(int *arr1, int *arr2){
    
    int temp = 0;

    for (int i=0; i<8; i++){

        temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}