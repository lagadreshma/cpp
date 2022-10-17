#include<iostream>
using namespace std;

/* 

Pivot Element - pivot element is the only element in input array which 
                is Smaller than previous one.

                A pivot element divided a sorted rotated array into two monotonically increasing array.

 */

int findPivot(int arr[], int size){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start < end){

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }else{
            end = mid;
        }

        mid = start + (end - start) / 2;

    }

    return start;

}

int main(){

    int size;
    cout << "Enter size of an array : " << endl;
    cin >> size;

    int arr[20];
    cout << "Enter Elements of array in the form of two monotonically increasing array : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int pivot = findPivot(arr, size);

    cout << "Pivot Element in an Array at index : " << pivot << endl;

    return 0;

}