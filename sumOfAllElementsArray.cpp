#include<iostream>
#include<limits.h>

using namespace std;


int sumOfArrayElements(int arr[], int n){

    int sum = 0;

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }

    return sum;

}

int main(){

    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int arr[10];

    for(int i = 0; i < size; i++){

        cin >> arr[i];

    }

    cout << "Sum of Array Elements are : " << sumOfArrayElements(arr,size) << endl;

    return 0;

}