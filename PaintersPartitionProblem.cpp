#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int painters, int mid){

    int painterCount = 1;
    int sectionSum = 0;

    for(int i = 0; i < size; i++){

        if(sectionSum + arr[i] <= mid){
            sectionSum += arr[i];
        }else{
            painterCount++;
            if(painterCount > painters || arr[i] > mid){

                return false;

            }

            sectionSum = arr[i];

        }

    }

    return true;

}

int findPaintersPartitionProblemMinimum(int arr[], int size, int painters){

    int s = 0, sum = 0, ans = -1;

    for(int i = 0; i < size; i++){
        sum += arr[i];
    }

    int e = sum;
    int mid = s + (e - s) / 2;

    while(s <= e){

        if(isPossible(arr, size, painters, mid)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }

        mid = s + (e - s) / 2;

    }

    return ans;

}

int main(){

    int size;
    cout << "Enter Size of an Array : " << endl;
    cin >> size;

    int arr[20];
    cout << "Enter Elements of an Array for Painters Partition Problem : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int painters;
    cout << "Enter Number of Painters : " << endl;
    cin >> painters;

    int ans = findPaintersPartitionProblemMinimum(arr, size, painters);

    cout << "Answer is : " << ans << endl;

    return 0;

}
