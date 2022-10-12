#include<iostream>
#include<limits.h>

using namespace std;

int getMin(int arr[], int size){

    int min = INT_MAX;

    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;

}

int getMax(int arr[], int size){

    int max = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;

}

int main(){

    int size;
    cout << "Enter Size of array : ";
    cin >> size;

    int num[100];

    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    cout << "Maximum Value is " << getMax(num,size) << endl;
    cout << "Minimum Value is " << getMin(num,size) << endl;


    return 0;

}