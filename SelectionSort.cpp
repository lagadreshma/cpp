#include<iostream>
using namespace std;


// time complexity - O(n^2)
// best complexity(array already sorted) - O(n^2)
// worst case complexity (array is sorted in reverse order) - O(n^2)
// space complexity - O(1)
// It is Unstable Sorting Algorithm - becaz It does not preserve order
// suppose we have given array - 2 14 8 14 9 5 
// then it sort as - 2 5 8 9 14' 14 - so it is unstable sort algo
// It is Not Adaptable Sorting Algorithm - becaz it's time complexity of all cases are same


void selectionSort(int arr[] , int size){

    for(int i = 0; i < (size - 1); i++){

        int minIndex = i;
        for(int j = (i + 1); j < size; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }

        swap(arr[minIndex] , arr[i]);

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
   cout << "Enter Size of array : " << endl;
   cin >> size;

   int arr[20];
   cout << "Enter Elements of array for Selection Sort : " << endl;
   for(int i = 0; i < size; i++){
       cin >> arr[i];
   }

   selectionSort(arr, size);

   cout << "Array After Sorting : " << endl;
   printArray(arr, size);

   return 0;

}