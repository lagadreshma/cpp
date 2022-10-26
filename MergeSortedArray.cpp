#include<iostream>
using namespace std;

void mergeArray(int arr1[], int n, int arr2[], int m, int arr[]){

    int i = 0, j = 0, k = 0;

    while(i < n && j < m){

        if(arr1[i] < arr2[j]){
            arr[k++] = arr1[i++];
        }else{
            arr[k++] = arr2[j++];
        }

    }

    while(i < n){

        arr[k++] = arr1[i++];

    }

    while(j < m){

        arr[k++] = arr2[j++];

    }

}

void printArray(int arr[], int size){

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){

    int size1;
    cout << "Enter Size of first Array : " << endl;
    cin >> size1;

    int arr1[size1];
    cout << "Enter Elements of first Array : " << endl;
    for(int i = 0; i < size1; i++){
        cin >> arr1[i];
    }

    int size2;
    cout << "Enter Size of second Array : " << endl;
    cin >> size2;

    int arr2[size2];
    cout << "Enter Elements of second Array : " << endl;
    for(int i = 0; i < size2; i++){
        cin >> arr2[i];
    }

    int arr[size1 + size2];

    mergeArray(arr1, size1, arr2, size2, arr);

    printArray(arr, size1 + size2);

 
    return 0;

}