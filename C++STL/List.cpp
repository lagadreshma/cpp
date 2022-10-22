#include<iostream>
#include<list>
using namespace std;

int main(){

    list<int> list1(5,100);

    list<int> list2(list1);

    list<int> l;

    l.push_back(34);
    l.push_back(99);
    l.push_front(80);

    l.pop_front();
    l.pop_back();

    l.begin();
    l.end();

    l.erase(l.begin());

    l.empty();
    l.size();
   
}