#include<iostream>
using namespace std;


// time complexity - O(n^2)
// best case time complexity(array already Sorted) - O(n)
// worst case time complexity(array is in reversed order) - O(n^2)
// space complexity - O(n)
// It is Stable Sorting Algorithm - becaz it preserves order
// suppose array - 2 14 8 14 9 5 
// then it sort as - 2 5 8 9 14 14' - so it preserve order 
// It is Adaptable Sorting Algorithm - becaz it's time complexity of two cases is different

void insertionSort(int arr[], int size){

    for(int i = 1; i < size; i++){

        int temp = arr[i];
        int j = i - 1;
        while(j >= 0){

            if(arr[j] > temp){
                arr[j + 1] = arr[j]; // shift
            }else{
                break;
            }

            j--;

        }

        arr[j + 1] = temp;

    }

}

void printArray(int arr[], int size){

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

int main(){

    int size;
    cout << "Enter size of an Array : " << endl;
    cin >> size;

    int arr[20];
    cout << "Enter Elements of Array for Bubble Sort : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    insertionSort(arr,size);
    cout << "Array After Sorting : " << endl;
    printArray(arr,size);

    return 0;

}