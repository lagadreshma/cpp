#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

};

class llist{

    node* head;

    public: llist(){
        head = NULL;
    }

    node* getnode();
    void create();
    void addAtBegin();
    void addAtEnd();
    int count();
    void addAtPosition(int);
    void reverse();
    void display();

};

node* llist:: getnode(){

    node* temp = new node();
    cout << "Enter Data : " << endl;
    cin >> temp -> data;
    temp -> next = NULL;
    return temp;

}

void llist:: create(){

    char ans;
    node* temp, *p;

    do{

        temp = getnode();

        if(head == NULL){

           head = temp;
           p = head;

        }else{

            p -> next = temp;
            p = temp;

        }

        cout << "Do you want add a Node (Y/N) : " << endl; 
        cin >> ans;

    }while(ans == 'Y');


}

void llist:: addAtBegin(){

    node* temp;
    temp = getnode();
    temp -> next = head;
    head = temp;

}

void llist:: addAtEnd(){

    node* temp, *p;
    temp = getnode();
    p = head;

    while(p != NULL){
        p = p -> next;
    }

    p -> next = temp;

}

int llist:: count(){

    node* temp = head;
    int c = 0;

    while(temp != NULL){
        c++;
        temp = temp -> next;
    }

    return c;

}
void llist:: addAtPosition(int pos){

    node* temp, *p;
    p = head;
    temp = getnode();
    int c = count();

    if(pos <= c){

        if(pos == 1){
            temp -> next = head;
            head = temp;
        }else{

            for(int i = 1; i < (pos - 1); i++){

                p = p -> next;

            }
            p -> next = temp;
            p = temp;

        }

    }else{
        cout << "Invalid Input." << endl;
    }
    

}

void llist:: reverse(){

    node* prev, *curr, *end;
    curr = head;
    prev = NULL;
    end = NULL;

    while(curr != NULL){

        end = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = end;

    }

    head = prev;


}

void llist:: display(){

    node* p;
    p = head;

    while(p != NULL){
        cout << p -> data << endl;
        p = p -> next;
    }

    cout << endl;

}

int main(){

    int ch;
    llist l1;

    do{

        cout << "##########################################" << endl;
        cout << "1. Create" << endl;
        cout << "2. addAtBegin" << endl;
        cout << "3. addAtEnd" << endl;
        cout << "4. addAtPosition" << endl;
        cout << "5. reverse" << endl;
        cout << "6. display" << endl;
        cout << "############################################" << endl;

        cout << "Enter Your Choice : " << endl;
        cin >> ch;


        switch(ch){

            case 1 : l1.create();
                     break;
            case 2 : l1.addAtBegin();
                     break;
            case 3 : l1.addAtEnd();
                     break;
            case 4 : int pos;
                     cout << "Enter Position : " << endl;
                     cin >> pos;
                     l1.addAtPosition(pos);
                     break;
            case 5 : l1.reverse();
                     break;
            case 6 : l1.display();
                     break;

            case 0 : exit(0);

            default : cout << "Invalid Input " << endl;

        }


    }while(ch != 0);


}