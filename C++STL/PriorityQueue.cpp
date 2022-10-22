#include<iostream>
#include<queue>

using namespace std;

int main(){

    // max priority queue
    priority_queue<int> maxi;
    maxi.push(80);
    maxi.push(99);
    maxi.push(67);
    maxi.push(22);

    int n = maxi.size();

    for(int i = 0; i < n; i++){
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    cout << "empty or not : " << maxi.empty() << endl;

    // min priority queue
    priority_queue<int , vector <int> , greater<int> > mini;
    mini.push(90);
    mini.push(7);
    mini.push(88);
    mini.push(99);

    int num = mini.size();
    for(int i = 0; i < num; i++){
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

}