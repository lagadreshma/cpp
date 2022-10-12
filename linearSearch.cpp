#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){

    for(int i = 0; i < size; i++){

        if(arr[i] == key){
            return 1;
        }

    }

    return 0;

}

int main(){

    int arr[10] = {10,29,-2,0,-4,50,88,34,-2,44};

    int key;
    cout << "Enter Key we have to search in array : " << endl;
    cin >> key;

    bool found = search(arr,10,key);

    if(found){
        cout << "Key is Present." << endl;
    }else{
        cout << "Key is Absent." << endl;
    }

    return 0;

}