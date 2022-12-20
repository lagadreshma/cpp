#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

};

class stack{

    node* top;

    public: stack(){
        top = NULL;
    }

    node* getnode();
    void push(int);
    int isEmpty();
    int pop();
    void display();

};

node* stack:: getnode(){

    node* temp = new node();
    return temp;

}

int stack:: isEmpty(){

   if(top == NULL){
      return 1;
   }else{
      return 0;
   }

}

void stack:: push(int val){

   node* temp = getnode();
   temp -> data = val;

   if(isEmpty()){

      top = temp;

   }else{

      temp -> next = top;
      top = temp;

   }

}

int stack:: pop(){

    if(isEmpty()){
        cout << "Stack is Empty" << endl;
    }

    node* temp = top;
    top = top -> next;
    int n = temp -> data;
    delete temp;
    return n;

}

void stack:: display(){

    node* p = top;
    if(isEmpty()){

        cout << "Stack is Empty" << endl;

    }else{

        while(p != NULL){
            cout << p -> data << endl;
            p = p -> next;
        }

        cout << endl;
    }

}

int main(){

    int ch;
    stack s;

    do{

        cout << "#################################" << endl;
        cout << "1. Push Element " << endl;
        cout << "2. Pop Element " << endl;
        cout << "3. Display Elements " << endl;
        cout << "0. Exit " << endl;
        cout << "#################################" << endl;

        cout << "Enter Your Choice : " << endl;
        cin >> ch;

        switch(ch){

            case 1: int value;
                    cout << "Enter Element : " << endl;
                    cin >> value;
                    s.push(value);
                    break;

            case 2: cout << s.pop() << " element is deleted" << endl;
                    break;

            case 3: s.display();
                    break;

            case 0: exit(0);

            default: cout << "Invalid Input " << endl;

        }

    }while(ch != 0);

    return 0;

}