#include<iostream>
using namespace std;

void mergeArray(int arr1[], int n, int arr2[], int m){

   int i = n - 1, j = m - 1, k = m + n - 1;

   while(k >= 0){

      if(i >= 0 && j >= 0){

         if(arr1[i] >= arr2[j]){
            arr1[k--] = arr1[i--];
         }else{
            arr1[k--] = arr2[j--];
         }

      }else if(j >= 0){
          arr1[k--] = arr2[j--];
      }else{
        break;
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

  int arr1[] = {1,2,3,0,0,0};
  int arr2[] = {2,5,6};

  mergeArray(arr1,3,arr2,3);

  printArray(arr1, 6);

  return 0;

}