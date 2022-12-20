#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
};

class queue{

    node* front, *rear;

    public: queue(){
        front = rear = NULL;
    }

    node* getnode();
    int isEmpty();
    int isFull();
    void insert_q(int);
    int delete_q();
    void display_q();

};

node* queue:: getnode(){

    node* temp = new node();
    return temp;

}

int queue:: isEmpty(){

    if(front == NULL && rear == NULL){
        return 1;
    }else{
        return 0;
    }

}

void queue:: insert_q(int val){

    node* temp = getnode();
    temp -> data = val;
    temp -> next = NULL;

    if(isEmpty()){
        front = rear = temp;
    }else{
        rear -> next = temp;
        rear = temp;
    }

}

int queue:: delete_q(){

    node* temp = front;
    int x = front -> data;

    if(front == rear){
        front = rear = NULL;
    }else{
        front = front -> next;
        delete temp;
        return x;
    }

}

void queue:: display_q(){

    node* temp = front;

    cout << "Elements of Queue : " << endl;

    while(temp){
        cout << temp -> data << endl;
        temp = temp -> next;
    }

    cout << endl;

}

int main(){

    int ch;
    queue q;

    do{

        cout << "#################################" << endl;
        cout << "1. Insert " << endl;
        cout << "2. Delete " << endl;
        cout << "3. Display " << endl;
        cout << "0. Exit " << endl;
        cout << "##################################" << endl;

        cout << "Enter Your choice : " << endl;
        cin >> ch;

        switch(ch){

            case 1: int val;
                    cout << "Enter Value : " << endl;
                    cin >> val;
                    q.insert_q(val);
                    break;
            
            case 2: cout << q.delete_q() << " is Deleted From queue." << endl;
                    break;

            case 3: q.display_q();
                    break;

            case 0: exit(0);

            default: cout << "Invalid Input" << endl;

        }

    }while(ch != 0);


    return 0;

}