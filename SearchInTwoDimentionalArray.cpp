#include<iostream>
using namespace std;

void searchElement(int arr[][3], int target){

    int flag = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(arr[i][j] == target){
                flag = 1;
            }
        }
    }

    if(flag == 1){
       cout << "Element Found." << endl;
    }else{
        cout << "Element Not Found." << endl;
    }

}

int main(){

    int arr[3][3];
    cout << "Enter Elements of an Array : " << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter element in which we have to search in Array : " << endl;
    cin >> target;

    searchElement(arr, target);

    return 0;

}