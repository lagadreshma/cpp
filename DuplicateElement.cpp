#include<iostream>
using namespace std;

void duplicateElement(int arr[], int size){

    for(int i = 0; i < size; i++){
        for(int j = (i + 1); j < size; j++){
            if(arr[i] == arr[j]){
                cout << arr[i] << " ";
            }
        }
    }


}

int main(){

    int size;
    cout << "Enter Size of an array : " << endl;
    cin >> size;

    int arr[20];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    duplicateElement(arr,size);


    return 0;

}