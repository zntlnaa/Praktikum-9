/*Nama file : insertionSort.c*/
/*Nama : Zenit Laena Fathonah*/
/*NIM : 24060121120006*/
/*Deskripsi : Mengurutkan tabel dengan insertion sort*/
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

void insertionSort(int arr[], int n){
/*kamus lokal*/
    int i,j,key;
/*algoritma*/
    for (i=1; i < n; i++){
        key = arr[i];
        j = i - 1;
        while (j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main(){
/*kamus*/
    int arr[]={5,3,2,5,1,6,7,8,9,15};
    int n;

/*algoritma*/
    n= sizeof(arr)/sizeof(arr[0]);

    printf("================Insertion Sort=================\n");
    printf("Sebelum dilakukan Insertion Sort : ");
    printArr(arr, n);
    insertionSort(arr, n);
    printf("Setelah dilakukan Insertion Sort : ");
    printArr(arr, n);

    return 0;
}
