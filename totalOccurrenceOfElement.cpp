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
        }else if(arr[mid] < key){
            start = mid + 1;
        }else if(arr[mid] > key){
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
        }else if(arr[mid] < key){
            start = mid + 1;
        }else if(arr[mid] > key){
            end = mid - 1;
        }

        mid = start + (end - start) / 2;

    }

    return ans;

}

int totalOccurrence(int firstOcc, int lastOcc){

    int totalOcc = (lastOcc - firstOcc) + 1;
    return totalOcc;

}

int main(){

    int size;
    cout << "Enter Size of an Element : " << endl;
    cin >> size;

    int arr[20];
    cout << "Enter Elements of an Array in Monotonic Order : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter Key To Find Out Total No. of Occurrences in an Array : " << endl;
    cin >> key;

    int first = firstOccurrence(arr, size, key);
    int last = lastOccurrence(arr, size, key);

    int occurrence = totalOccurrence(first, last);
    cout << "Total Occurrences of " << key << " is : " << occurrence << endl;

    return 0;

}