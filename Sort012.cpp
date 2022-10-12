#include<iostream>
using namespace std;

void printArray(int arr[], int size){

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

void sortZeroOneTwo(int arr[], int size){

    int low = 0, mid = 0, high = (size - 1);

    while(mid <= high){

        switch(arr[mid]){

            case 0:  swap(arr[low], arr[mid]);
                     low++;
                     mid++;
                     break;

            case 1:  mid++;
                     break;

            case 2:  swap(arr[mid], arr[high]);
                     high--;
                     break;

        }

    }

}

int main(){

    int size;
    cout << "Enter Size of An Array : " << endl;
    cin >> size;

    int arr[20];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    sortZeroOneTwo(arr,size);
    printArray(arr,size);

}