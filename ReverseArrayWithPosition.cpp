#include<iostream>
using namespace std;

void reverseArray(int arr[], int size, int m){

    int start = m + 1, end = size - 1;

    while(start <= end){

        swap(arr[start] , arr[end]);
        start++;
        end--;

    }

}

void printArray(int arr[], int size){

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){

    int arr[6] = {9,4,90,23,67,33};

    int position;
    cout << "Enter position of element where from that element array is sorted : " << endl;
    cin >> position;

    reverseArray(arr,6,position);
    printArray(arr,6);

    return 0;

}