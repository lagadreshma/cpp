#include<iostream>
#include<limits.h>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(int stalls[], int size, int cows, int mid){

    int cowsCount = 1;
    int lastStop = stalls[0];

    for(int i = 0; i < size; i++){

        if(stalls[i] - lastStop >= mid){

            cowsCount++;
            if(cowsCount == cows){
                return true;
            }
            
            lastStop = stalls[i];

        }

    }

    return false;

}

int agressiveCows(int stalls[], int size, int cows){

    int start = 0;
    int maxi = -1;

    for(int i = 0; i < size; i++){
        maxi = max(stalls[i], maxi);
    }

    int end = maxi;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while(start <= end){

        if(isPossible(stalls, size, cows, mid)){

            ans = mid;
            start = mid + 1;   
            //go to right part because we have to find largest minimum distance

        }else{

            end = mid - 1;

        }

        mid = start + (end - start) / 2;

    }

    return ans;

}

int main(){

    int size;
    cout << "Enter Size of an Array : " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter Elements of an array for Aggressive Cows Problem : " << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int cows;
    cout << "Enter No. of Cows : " << endl;
    cin >> cows;

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    int ans = agressiveCows(arr, size, cows);
    cout << "Answer is : " << ans << endl;

    return 0;

}