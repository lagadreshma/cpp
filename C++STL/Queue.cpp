#include<iostream>
#include<queue>

using namespace std;

int main(){

    // queue - first in first out(FIFO)

    queue<string> q;

    q.push("reshma");
    q.push("nikita");
    q.push("nutan");

    cout << "Size of queue : " << q.size() << endl;

    cout << "Queues top element : " << q.front() << endl;

    cout << "Queres bottom / last element : " << q.back() << endl;

    q.pop();
    cout << "After pop element top element is : " << q.front() << endl; 

    cout << "Empty or Not : " << q.empty() << endl;

}