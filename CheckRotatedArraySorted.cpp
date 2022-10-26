#include<iostream>
using namespace std;

int checkArray(int arr[], int size){

    int count = 0;

    for(int i = 1; i < size; i++){

        if(arr[i - 1] > arr[i]){
            count++;
        }

    }

    if(arr[size - 1] > arr[0]){
        count++;
    }

    return count;

}

int main(){

    int size;
    cout << "Enter Size of an Array : " << endl;
    cin >> size;

    int arr[20];
    cout << "Enter Elements of Array : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int result = checkArray(arr,size);

    if(result <= 1){
        cout << "true" << endl;
    }else{
        cout << "false" << endl;
    }


    return 0;

}