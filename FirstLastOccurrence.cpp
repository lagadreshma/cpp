#include<iostream>
using namespace std;

int firstOccurrence(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }else if(key > arr[mid]){
            start = mid + 1;
        }else if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start) / 2;

    }

    return ans;

}

int lastOccurrence(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    int ans = -1;

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }else if(key > arr[mid]){
            start = mid + 1;
        }else if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start) / 2;

    }

    return ans;

}

int main(){

    int size;
    cout << "Enter Size of an Element : " << endl;
    cin >> size;

    // array should be in monotonic order - either incresing or decresing order

    int arr[20];
    cout << "Enter Elements of an Array in Monotonic Order : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter Key To find First and Last Occurrence of Element : " << endl;
    cin >> key;

    int first = firstOccurrence(arr, size, key);
    cout << "First Occurrence of " << key << " is : " << first << endl;

    int last = lastOccurrence(arr, size, key);
    cout << "Last Occurrence of " << key << " is : " << last << endl;

    return 0;

}