#include<iostream>
using namespace std;

int printArray(int arr[][3]){

    cout << "Row wise Print : " << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Column wise Print : " << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
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

    printArray(arr);

    return 0;

}
