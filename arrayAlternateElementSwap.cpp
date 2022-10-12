#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){

    int temp;

    for(int i = 0; i < size; i+=2){

        if((i + 1) < size){
           // swap(arr[i], arr[i+1]);
           
           temp = arr[i];
           arr[i] = arr[i + 1];
           arr[i + 1] = temp;

        }

    }

}

void printArray(int arr[] , int size){

    for(int i = 0; i < size; i++){

        cout << arr[i] << " ";

    }
    
    cout << endl;

}

int main(){

    int arr1[5] = {1,2,3,4,5};
    int arr2[6] = {10,40,50,30,80,20};

    swapAlternate(arr1,5);
    swapAlternate(arr2,6);

    printArray(arr1,5);
    printArray(arr2,6);

    return 0;

}