#include<iostream>
using namespace std;

// time Complexity - O(n^2)
// best case time complexity(array alredy Sorted) - O(n)
// worst case time complexity(array is in sorted reverse order) - O(n^2)
// space complexity - O(1)
// It is Stable Sorting Algorithm - becaz it preserves order
// suppose array - 2 14 8 14 9 5 
// then it sort as - 2 5 8 9 14 14' - so it preserve order 
// It is Adaptable Sorting Algorithm - becaz it's time complexity of any two cases are different

void bubbleSort(int arr[], int size){

    bool swapped = false;

    for(int i = 0; i < (size - 1); i++){

        for(int j = 0; j < (size - i - 1); j++){

            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }

        }

        if(swapped == false){
            break;      // array is alredy sorted
        }

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

    bubbleSort(arr,size);
    cout << "Array After Sorting : " << endl;
    printArray(arr,size);

    return 0;

}