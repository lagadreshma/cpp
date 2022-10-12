#include<iostream>
using namespace std;

int main(){
    // Initialize all array elements with same value

    // 1. using Initailizer List -
    int a[5] = {1,1,1,1,1};
    for(int i = 0; i < 5; i++){
        cout << a[i] << " " << endl;
    }

    int arr[10] = {0};
    for(int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";

    // 2. using Designated Initializers -
    // int b[10] = { [0 ... 9] = 1};
    // for(int i = 0; i < 10; i++){
    //     cout << b[i] << " ";
    // }

    // 3. using for loop
    int c[10];
    int val = 5;

    for(int i = 0; i < 10; i++){
        c[i] = val;
    }

    for(int i = 0; i < 10; i++){
        cout << c[i] << " ";
    }

    cout << "\n";

    // 4. using fill_n function
    int n = 5;
    int value = 2;
    int d[n];

    fill_n(d,n,value);

    for(int i = 0; i < n; i++){
        cout << d[i] << " ";
    }


}