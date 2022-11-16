#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int students, int mid){

    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i < size; i++){

        if(pageSum + arr[i] <= mid){

          pageSum += arr[i];

       }else{

          studentCount++;

          if(studentCount > students || arr[i] > mid){

             return false;

          }

          pageSum = arr[i];

       }

    }

    return true;

}

int findMinimumBookAllocation(int arr[], int size, int students){

    int start = 0, ans = -1, sum = 0;

    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }

    int end = sum;
    

    while(start <= end){
        
        if(students > size){
            
            return -1;
            
        }
        
        int mid = start + (end - start) / 2;

        if(isPossible(arr, size, students, mid)){

            ans = mid;
            end = mid - 1;

        }else{

            start = mid + 1;

        }

    }

    return ans;

}

int main(){

    int size;
    cout << "Enter Size of an Array : " << endl;
    cin >> size;

    int arr[20];
    cout << "Enter Elements of an Array for Book Allocation : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int students;
    cout << "Enter Number of Students : " << endl;
    cin >> students;

    int ans = findMinimumBookAllocation(arr, size, students);
    cout << "Answer is : " << ans << endl;

    return 0;

}
