#include<iostream>
using namespace std;

class node{

    public:
    int data;
    node* next;

};

class llist{

    node* head;
    // constructor 
    public: llist(){
        head = NULL;
    }

    node* getnode();
    void create();
    void AddAtBegin();
    void AddAtEnd();
    void updateValue(int, int);
    void updatePosition(int , int);
    void deleteByValue(int);
    void deleteByPosition(int);
    int count();
    void display();

};

node* llist:: getnode(){

    node *temp = new node;
    cout << "Enter Node data : " << endl;
    cin >> temp -> data;
    temp -> next = NULL;

    return temp;

}

void llist:: create(){

    char ans;
    node*p, *temp;
    do{

        temp = getnode();
        if(head == NULL){
            head = temp;
            p = head;
        }else{
            p -> next = temp;
            p = temp;
        }

        cout << "You Want to add another node (Y/ N) : " << endl;
        cin >> ans;

    }while(ans == 'Y');

}

void llist:: AddAtBegin(){

    node* temp;
    temp = getnode();
    temp -> next = head;
    head = temp;

}

void llist:: AddAtEnd(){

    node* p, *temp;
    p = head;
    temp = getnode();
    while(p -> next != NULL){
        p = p -> next;
    }

    p -> next = temp;

}

void llist:: updateValue(int value, int newValue){

    node* temp = head;
    int flag = 0;

    while(temp != NULL){
        if(temp -> data == value){
            temp -> data = newValue;
            flag = 1;
            break;
        }else{
            temp = temp -> next;
        }
    }
    
    if(flag == 1){
        cout << "Element is Find and Updated Successfully !!" << endl;
    }else{
        cout << "Element is Not Found." << endl;
    }

}

void llist:: updatePosition(int pos, int value){

    node* p = head;
    int cnt = 1;

    while(p != NULL){

        if(pos == cnt){
            p -> data = value;
            break;
        }else{
            p = p -> next;
            cnt++;
        }

    }

}

void llist:: deleteByValue(int value){

    node* p, *prev;
    int f = 0;
    p = head;

    if(p -> data == value){

        f = 1;
        head = head -> next;
        delete p;
     
    }else{

       while(p != NULL){

           if(p -> data == value){
               f = 1;
               prev -> next = p -> next;
               delete p;
               break;
           }
           prev = p;
           p = p -> next;

       }

    }
    

}

int llist:: count(){

    node* temp;
    temp = head;
    int c = 0;

    while(temp != NULL){
        c++;
        temp = temp -> next;
    }

    return c;

}

void llist:: deleteByPosition(int pos){

    node* temp, *p;
    p = head;
    int c = count();

    if(pos <= c){

        if(pos == 1){
            temp = head;
            head = head -> next;
            delete temp;
            cout << "Node Deleted." << endl;
        }else{

            for(int i = 1; i < (pos - 1); i++){
                p = p -> next;
            }

            temp = p -> next;
            p -> next = p -> next -> next;
            delete temp;
            cout << "Node Deleted." << endl;

        }

    }else{
        cout << "Invalid Position." << endl;
    }

}

void llist:: display(){

    node*p;
    p = head;
    while(p != NULL){
        cout << p -> data << " ";
        p = p -> next;
    }

    cout << endl;

}


int main(){

    int ch;
    llist l;

    do{

        cout << "Choose One Option : " << endl;
        cout << "1. Create " << endl;
        cout << "2. AddAtBegin() " << endl;
        cout << "3. AddAtEnd() " << endl;
        cout << "4. display() " << endl;
        cout << "5. update Value By value " << endl;
        cout << "6. Update value by Position " << endl;
        cout << "7. Delete By Value " << endl;     
        cout << "8. Delete By Position " << endl;
        cout << "0. exit() " << endl;

        cin >> ch;

        switch(ch){

            case 1 : l.create();
                     break;

            case 2 : l.AddAtBegin();
                     break;

            case 3 : l.AddAtEnd();
                     break;

            case 4 : l.display();
                     break;


            case 5 : int value, newValue;
                     cout << "Enter Value which we have to update it : " << endl;
                     cin >> value;
                     cout << "Enter newValue which we have to put at the OldValue : " << endl;
                     cin >> newValue;
                     l.updateValue(value, newValue);
                     break;

            case 6 : int pos, v;
                     cout << "Enter Position which we have to update it's value : " << endl;
                     cin >> pos;
                     cout << "Enter Value : " << endl;
                     cin >> v;
                     l.updatePosition(pos, v);
                     break;

            case 7 : int deleteValue;
                     cout << "Enter Value which we havae to delete : " << endl;
                     cin >> deleteValue;
                     l.deleteByValue(deleteValue);
                     break;

            case 8 : int position;
                     cout << "Enter Position : " << endl;
                     cin >> position;
                     l.deleteByPosition(position);
                     break;                     

            case 0 : exit(0);

            default : cout << "invalid Input " ;
                      break;

        }

    }while(ch != 0);

    return 0;


}