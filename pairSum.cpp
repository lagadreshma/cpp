#include<iostream>
using namespace std;

void findPairs(int arr[], int size, int sum){

    for(int i = 0; i < size; i++){
        for(int j = (i + 1); j < size; j++){
            if(arr[i] + arr[j] == sum){
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }

}

int main(){

    int size;
    cout << "Enter size of an Array : " << endl;
    cin >> size;

    int arr[10];
    cout << "Enter Elements of an array : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int sum;
    cout << "Enter sum of pair to find : " << endl;
    cin >> sum;

    findPairs(arr,size,sum);

}