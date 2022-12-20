#include<iostream>
using namespace std;

class node{
    public:
    int data, pri;
    node* next;
};

class pQueue{

    node* front, *rear;

    public: pQueue(){
        front = rear = NULL;
    }


    int isEmpty();
    void insert_q(int, int);
    int delete_q();
    void display();

};

int pQueue::isEmpty(){

    if(front == NULL || rear == NULL){
        return 1;
    }else{
        return 0;
    }

}

void pQueue::insert_q(int value, int p){

    node* temp, *q;
    temp = new node();
    temp -> data = value;
    temp -> pri = p;
    temp -> next = NULL;

    if(isEmpty()){
        front = rear = NULL;
    }else if(p > front -> pri){
        temp -> next = front;
        front = temp;
    }else{
        q = front;
        while(q -> next != NULL && q -> next -> pri >= p){
            q = q -> next;
        }
        temp -> next = q -> next;
        q -> next = temp;
    }

}

int pQueue::delete_q(){

    int x;
    node* temp = front;

    if(isEmpty()){
        cout << "Queue is Under Flow " << endl;
    }else{

        if(front == rear){
            front = rear = NULL;
        }else{

            x = front -> data;
            front = front -> next;
            delete temp;

        }

        return x;

    }

}

void pQueue::display(){

    node* p = front;

    if(isEmpty()){
        cout << "Queue is Empty" << endl;
    }

    while(p){

        cout << p -> data << " " ;
        p = p -> next;

    }

    cout << endl;

}

int main(){

    int ch;
    pQueue p;

    do{

       cout << "############################" << endl;
       cout << "1. Insert Element depends on Priority " << endl;
       cout << "2. Delete Element " << endl;
       cout << "3. Display Elements " << endl;
       cout << "4. Exit " << endl;
       cout << "############################" << endl;
       
       cout << "Enter Your choice : " << endl;
       cin >> ch;

       switch(ch){

          case 1: int val, priority;
                  cout << "Enter Value : " << endl;
                  cin >> val;
                  cout << "Enter Priority : " << endl;
                  cin >> priority;
                  p.insert_q(val, priority);
                  break;

          case 2: cout << p.delete_q() << " is Deleted from Priority Queue " << endl;
                  break;

          case 3: p.display();
                  break;

          case 0: exit(0);

          default: cout << "Invalid Input " << endl; 

       }


    }while(ch != 0);

    return 0;

}