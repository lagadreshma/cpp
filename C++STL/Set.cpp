#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;

    s.insert(20);
    s.insert(90);
    s.insert(67);
    s.insert(80);
    s.insert(80);
    s.insert(5);

    
    cout << "Size of set : " << s.size() << endl;
    
    s.erase(s.begin());
    cout << "Size of set after erase : " << s.size() << endl;

}