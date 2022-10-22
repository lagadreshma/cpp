#include<iostream>
#include<map>

using namespace std;
int main(){

    map<int,string> m;

    m[1] = "Reshma";
    m[3] = "Nikita";
    m[9] = "Nutan";

    cout << m[1] << endl;

    for(int i = 0; i < m.size(); i++){
        cout << m[i] << " ";
    }
    cout << endl;

}