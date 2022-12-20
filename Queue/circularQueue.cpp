#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

class cQueue{

    node* front, *rear;
    public: cQueue(){
        front = rear = NULL;
    }

    int isEmpty();
    void insert_q(int);
    int delete_q();
    void display();

};

int cQueue::isEmpty(){

    if(front == NULL || rear == NULL){
        return 1;
    }else{
        return 0;
    }

}

void cQueue::insert_q(int val){

    node* temp = new node();
    temp -> data = val;
    temp -> next = NULL;

    if(isEmpty()){
        front = rear = temp;
    }else{
        rear -> next = temp;
    }
    rear = temp;
    rear -> next = front;

}

int cQueue::delete_q(){

    int x;
    node* temp = front;

    if(isEmpty()){
        cout << "Queue is Under Flow " << endl;
    }else{
        x = front -> data;
        front = front -> next;
        rear -> next = front;
        delete temp;
    }

    
    return x;

}

void cQueue::display(){

    node* p = front;

    if(isEmpty()){
        cout << "Queue is Empty " << endl;
    }

        while(p -> next != front){
            cout << p -> data << " ";
            p = p -> next;
        }

        cout << p -> data << endl;


}

int main(){

    int ch;
    cQueue q;

    do{

        cout << "##########################" << endl;
        cout << "1. Insert Element " << endl;
        cout << "2. Delete Element " << endl;
        cout << "3. Display Element " << endl;
        cout << "0. Exit " << endl;
        cout << "##########################" << endl;

        cout << "Enter Your Choice : " << endl;
        cin >> ch;

        switch(ch){

            case 1: int val;
                    cout << "Enter Element : " << endl;
                    cin >> val;
                    q.insert_q(val);
                    break;

            case 2: cout << q.delete_q() << " is deleted from Circular Queue " << endl;
                    break;

            case 3: q.display();
                    break;

            case 0: exit(0);

            default: cout << "Invalid Input " << endl;

        }

    }while(ch != 0);


    return 0;

}