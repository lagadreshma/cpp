#include<iostream>
using namespace std;

void moveZeroesRight(int arr[], int size){

   int i = 0;

   for(int j = 0; j < size; j++){

      if(arr[j] != 0){
          swap(arr[j], arr[i]);
          i++;
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
   cout << "Enter elements of array : " << endl;
   for(int i = 0; i < size; i++){
      cin >> arr[i];
   }

   moveZeroesRight(arr, size);

   printArray(arr, size);

}