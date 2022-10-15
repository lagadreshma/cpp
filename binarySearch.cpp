#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){    // go to right part
            start = mid + 1;
        }else{   // go to left part  (key < arr[mid])
            end = mid - 1;
        }

        mid = start + (end - start) / 2;

    }

    return -1;

}

int main(){

    int even[6] = {3,5,9,13,17,29};
    int odd[5] = {2,8,15,17,27};

    int evenIndex = binarySearch(even, 6, 17);
    cout << "index of 17 is : " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 2);
    cout << "index of 2 is : " << oddIndex << endl;

    return 0;

}