#include<iostream>
#include<limits.h>
using namespace std;

int getMin(int arr[], int size){

    int mini = INT_MAX;

    for(int i = 0; i < size; i++){

        mini = min(mini, arr[i]);

    }

    return mini;

}

int getMax(int arr[], int size){

    int maxi = INT_MIN;

    for(int i = 0; i < size; i++){
        maxi = max(maxi, arr[i]);
    }

    return maxi;

}

int main(){

    int size;
    cout << "Enter size of array : ";
    cin >> size;

    int num[100];

    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    cout << "Maximun value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    return 0;

}