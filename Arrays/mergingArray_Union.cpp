#include <bits/stdc++.h>
using namespace std;

void merge(int arr1[], int a, int arr2[], int b, int arr3[]){
    int i = 0, j = 0, index = 0;
    while ( i < a && j < b ){
        if ( arr1[i] < arr2[j] ){
            arr3[index] = arr1[i];
            i++, index++;
        }
        else {
            arr3[index] = arr2[j];
            j++, index++;
        }
    }
    // if arr1[] is still left to copy
    while ( i < a ){
        arr3[index] = arr1[i];
        i++, index++;
    }
    // if arr2[] is still left to copy
    while ( j < b ){
        arr3[index] = arr2[j];
        j++, index++;
    }
}

void print(int arr3[], int size){
    for (int i = 0; i < size; i++){
        cout << arr3[i] << " ";
    }
}

int main(){

    int arr1[5] = {1,5,7,8,9};
    int arr2[3] = {2,3,4};

    int arr3[8];

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);

    return 0;
}