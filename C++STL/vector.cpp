#include<iostream>
#include<vector>
using namespace std;

int main(){

    // initialize vector
    vector<int> a(5, 1);  // vectors all elements initialize with 1
    cout << "vector a : " << endl;
    for(int i = 0; i < a.size(); i++){
        cout << a[i] << " ";
    }
    cout << endl;

    // copy vector elements in another vector
    vector<int> acopy(a);
    cout << "vector acopy : " << endl;
    for(int i = 0; i < acopy.size(); i++){
        cout << acopy[i] << " ";
    }
    cout << endl;

    vector<int> v;

    cout << "vector v : " << endl;

    cout << "Capacity : " << v.capacity() << endl;   // return capacity to store elements of vector
    
    v.push_back(12);  // add element at end of vector
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(90);
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(8);
    cout << "Capacity : " << v.capacity() << endl;

    // it's capacity is double when we added extra element in vector

    cout << "Size of vector : " << v.size() << endl; // print size of vector

    cout << "Element at position 3 : " << v.at(2) << endl; // print element present at index 2

    cout << "Element at First Position : " << v.front() << endl;// print first element

    cout << "Element at Last Position : " << v.back() << endl;  // print last element

    cout << "Vector Before Pop : " << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    v.pop_back();   // remove last element

    cout << "Vector After Pop : " << endl;
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Size of vector before Clear : " << v.size() << endl;
    v.clear();    // remove all Elements
    cout << "size of vector after Clear : " << v.size() << endl;



}