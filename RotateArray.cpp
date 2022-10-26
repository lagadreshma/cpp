#include<iostream>
using namespace std;

void rotateArray(int arr[], int size, int m){

    int temp[size];

    for(int i = 0; i < size; i++){

        temp[(i + m) % size] = arr[i];

    }

    for(int i = 0; i < size; i++){

        cout << temp[i] << " ";

    }
    cout << endl;

}

int main(){

    int size;
    cout << "Enter Size of an Array : " << endl;
    cin >> size;

    int arr[20];
    cout << "Enter Elements of an Array : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int shift;
    cout << "Enter Number in which we want shift whole array elements : " << endl;
    cin >> shift;

    rotateArray(arr, size, shift);

    return 0;

}