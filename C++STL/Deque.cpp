#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(20);  // in deque element added at back side
    d.push_front(45); // in deque element added at fornt side
    for(int i = 0; i < d.size(); i++){
        cout << d[i] << " ";
    }

    cout << endl;

    d.push_back(33);
    d.push_back(90);
    d.push_back(66);
    for(int i = 0; i < d.size(); i++){
        cout << d[i] << " ";
    }
    cout << endl;

    d.pop_back(); // remove element from back;
    d.pop_front(); // remove element from front;
    for(int i = 0; i < d.size(); i++){
        cout << d[i] << " ";
    }
    cout << endl;

    cout << "Element at index 0 : " << d.at(0) << endl;
    cout << "Empty or not : " << d.empty() << endl;
    cout << "Element at First Position : " << d.front() << endl;
    cout << "Element at Last Position : " << d.back() << endl;

    cout << "Before erase : " << endl;
    for(int i = 0; i < d.size(); i++){
        cout << d[i] << " ";
    }
    cout << endl;

    cout << "After erase : " << endl;
    d.erase(d.begin(), d.begin() + 1);
    for(int i = 0; i < d.size(); i++){
        cout << d[i] << " ";
    }
    cout << endl;


}