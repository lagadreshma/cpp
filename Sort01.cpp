#include<iostream>
using namespace std;

void sortZeroOne(int arr[], int size){

    int left = 0, right = size - 1;

    while(left < right){

        while(arr[left] == 0 && left < right){
            left++;
        }
        while(arr[right] == 1 && left < right){
            right--;
        }

        if(left < right){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }

}

void printArray(int arr[], int size){

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

}

int main(){

    int size;
    cout << "Enter Size of an array : " << endl;
    cin >> size;

    int arr[10];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    sortZeroOne(arr,size);
    printArray(arr,size);

}