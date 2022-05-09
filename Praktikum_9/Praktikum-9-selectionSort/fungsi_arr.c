#include <stdio.h>

void maxArr(int arr[], int n, int *max){
    /*kamus lokal*/
    int i;
    *max = arr[0];

    /*algoritma*/
    for (i = 1; i < n; i++){
        if (arr[i] > *max){
            *max = arr[i];
        }
    }
}

