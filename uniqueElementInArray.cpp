#include<iostream>
using namespace std;


int findUnique(int arr[] , int size){

    int c;

    for(int i = 0; i < size; i++){

        c = 0;
        for(int j = 0; j < size; j++){

           if(i != j){
              if(arr[i] == arr[j]){
                c++;
              }
           }

        }

        if(c == 0){
            cout << arr[i] << " ";
        }

    }

}


int main(){

    int arr1[5] = {34, 56,34, 80,56};
    int arr2[9] = {1,2,3,4,5,1,2,3,4};

    findUnique(arr1,5);
    findUnique(arr2,9);


    return 0;

}