#include<iostream>
using namespace std;

int findPosition(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start <= end){

        if(key == arr[mid]){
            return mid;
        }else if((key >= arr[0])){
            start = mid + 1;
        }else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;

    }

    return -1;

}

int main(){

    int size;
    cout << "Enter size of an array : " << endl;
    cin >> size;

    int arr[20];
    cout << "Enter Elements of array in the form of two monotonically increasing array : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter Key we have to Search in Array : " << endl;
    cin >> key;

    int keyIndex  = findPosition(arr, size,key);
    cout << key << " is at Index : " << keyIndex << endl;

    return 0;

}