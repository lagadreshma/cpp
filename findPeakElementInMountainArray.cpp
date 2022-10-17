#include<iostream>
using namespace std;

int findPeakElement(int arr[], int size){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while(start < end){

        if(arr[mid] < arr[mid + 1]){
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
    cout << "Enter size of an Montain Array : " << endl;
    cin >> size;

    int arr[20];
    cout << "Enter Elements of Mountain Array : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int peakElement = findPeakElement(arr, size);

    cout << "Peak Element of Mountain Array is at index : " << peakElement << endl;

    return 0;

}
