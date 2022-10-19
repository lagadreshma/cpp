#include<iostream>
using namespace std;

int findSquareRoot(int num){
    int start = 0;
    int end = num;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){

        int midSquare = mid * mid;

        if(midSquare == num){
            return mid;
        }else if(midSquare > num){
            end = mid - 1;
        }else{
            ans = mid;
            start = mid + 1;
        }

        mid = start + (end - start) / 2;

    }

    return ans;

}

int main(){

    int num;
    cout << "Enter any Number to find it's Square Root : " << endl;
    cin >> num;

    int root = findSquareRoot(num);

    cout << "Square Root of " << num << " is : " << root << endl;

    return 0;

}