/*Nama file : selectionSort.c*/
/*Nama : Zenit Laena Fathonah*/
/*NIM : 24060121120006*/
/*Deskripsi : Mengurutkan tabel dengan selection sort*/
/*Tanggal selesai : 5 Mei 2022*/

#include <stdio.h>
#include "fungsi_arr.h"

void printArr(int arr[], int n){
/*kamus lokal*/
    int i;
/*algoritma*/
    for ( i =0; i < n; i++){
        printf("%d", arr[i]);}
        printf("\n");

}

void swap(int *a, int *b){
/*kamus lokal*/
    int temp;
/*algoritma*/
    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n){
/*kamus lokal*/
    int i, j, min;
/*algoritma*/
    for (i=0;i<n-1;i++){
        for (j=i+1;j<n;j++){
            min=i;
            if(arr[j]<arr[min]){
                min=j;
            }
            swap(&arr[i], &arr[min]);
        }
    }
    }

int main(){
/*kamus*/
    int arr[] ={5, 3, 2, 10, 9, 6, 8, 1, 7, 4, 15, 9};
    int n;

/*algoritma*/
    n = sizeof(arr)/sizeof(arr[0]);

    printf("============Selection Sort==============\n");
    printf("Sebelum dilakukan Selection Sort : ");
    printArr(arr, n);
    selectionSort(arr, n);
    printf("Setelah dilakukan Selection Sort : ");
    printArr(arr, n);
    return 0;
}

