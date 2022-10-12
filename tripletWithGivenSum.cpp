#include<iostream>
using namespace std;

void findTriplets(int arr[], int size, int sum){

   cout << "Triplet Pairs whose Sum is : " << sum << endl;

   for(int i = 0; i < size; i++){

      for(int j = (i + 1); j < size; j++){

        for(int k = (i + 2); k < size; k++){

            if((i != j) && (j != k) && (i != k)){
                if(arr[i] + arr[j]+ arr[k] == sum){
                   cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
            }

        }

      }

   }

}

int main(){

    int size;
    cout << "Enter size of an Array : " << endl;
    cin >> size;

    int arr[50];
    cout << "Enter Elements of an Array : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int sum;
    cout << "Enter value of Sum we hava to find 3 no.s pairs : " << endl;
    cin >> sum;

    findTriplets(arr,size,sum);


}