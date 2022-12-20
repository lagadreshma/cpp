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
    int count();
    void addAtFront();
    void addAtEnd();
    void addAtPosition(int);
    void updateByValue(int, int);
    void updateByPosition(int, int);
    void deleteByValue(int);
    void deleteByPosition(int);
    void reverse();
    void display();

};

node* llist:: getnode(){

    node* temp = new node();
    cout << "Enter data : " << endl;
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

        cout << "You want to add Element in List (Y/N) : " << endl;
        cin >> ans;

    }while(ans == 'Y');

}

int llist::count(){

    node* temp = head;
    int c = 0;

    while(temp != NULL){
        temp = temp -> next;
        c++;
    }

    return c;

}

void llist:: addAtFront(){

    node* temp;
    temp = getnode();
    temp -> next = head;
    head = temp; 

}

void llist:: addAtEnd(){

    node* temp, *p;
    temp = getnode();
    p = head;

    while(p -> next != NULL){
        p = p -> next; 
    }

    p -> next = temp;

}

void llist::addAtPosition(int pos){

    if(pos == 1){
        addAtFront();
        return;
    }

    node* temp = head;
    int cnt = 1;
    while(cnt < pos - 1){
        temp = temp -> next;
        cnt++;
    }

    if(temp -> next == NULL){
        addAtEnd();
        return;
    }

    node* p = getnode();
    p -> next = temp -> next;
    temp -> next = p;

}

void llist::updateByValue(int val, int newVal){

    node* temp = head;
    int flag = 0;

    while(temp != NULL){

        if(temp -> data == val){
            temp -> data = newVal;
            flag = 1;
            break;
        }else{
            temp = temp -> next;
        }

    }

    if(flag == 1){
        cout << "Element is Found and Successfully Updated !! " << endl;
    }else{
        cout << "Element is Not Fount" << endl;
    }

}

void llist:: updateByPosition(int pos, int val){

    node* temp = head;
    int cnt = 1;

    while(cnt < pos - 1){

        temp = temp -> next;
        cnt++;

    }

    temp -> data = val; 

}

void llist:: deleteByValue(int val){

    node* temp = head;
    node* p;
    int f = 0;


    if(temp -> data == val){

       f = 1;
       head = head -> next;
       delete temp;

    }else{
        
      while(temp != NULL){

        if(temp -> data == val){
            f = 1;
            p -> next = temp -> next;
            delete temp;
            break;
        }
            p = temp;
            temp = temp -> next;
      }
    }


}

void llist:: deleteByPosition(int pos){

    node* temp = head;
    node* p;
    int cnt = count();

    if(pos <= cnt){

        if(pos == 1){
            head = head -> next;
            delete temp;
            cout << "Node Deleted" << endl;
        }else{

            for(int i = 1; i < pos - 1; i++){
                temp = temp -> next;
            }

            p = temp -> next;
            temp -> next = p -> next;
            delete p;
            cout << "Node Deleted" << endl;

        }

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

void llist::display(){

    node *p;
    p = head;

    while(p != NULL){
        cout <<  p -> data << " " ;
        p = p -> next;
    }

    cout << endl;

}

int main(){

    int ch;
    llist l;

    do{

        cout << "####################################" << endl;
        cout << "1. Create " << endl;
        cout << "2. AddAtFront " << endl;
        cout << "3. AddAtEnd " << endl;
        cout << "4. AddAtPosition " << endl;
        cout << "5. UpdateByValue " << endl;
        cout << "6. UpdateByPosition " << endl;
        cout << "7. DeleteByValue " << endl;
        cout << "8. DeleteByPosition " << endl;
        cout << "9. ReverseList " << endl;
        cout << "10. Display " << endl;
        cout << "0. Exit " << endl;
        cout << "#######################################" << endl;

        cout << "Enter Your Choice : " << endl;
        cin >> ch;

        switch(ch){

            case 1: l.create();
                    break;

            case 2: l.addAtFront();
                    break;

            case 3: l.addAtEnd();
                    break;

            case 4: int pos;
                    cout << "Enter Position : " << endl;
                    cin >> pos;
                    l.addAtPosition(pos);
                    break;

            case 5: int val, newVal;
                    cout << "Enter  Value which we have to update : " << endl;
                    cin >> val;
                    cout << "Enter new Value : " << endl;
                    cin >> newVal;
                    l.updateByValue(val, newVal);
                    break;

            case 6: int position, newValue;
                    cout << "Enter Position Which we have to update it's value : " << endl;
                    cin >> position;
                    cout << "Enter New Value : " << endl;
                    cin >> newValue;
                    l.updateByPosition(position,newValue);
                    break;

            case 7: int value;
                    cout << "Enter Value which we have to delete from list : " << endl;
                    cin >> value;
                    l.deleteByValue(value);
                    break;

            case 8: int deletePos;
                    cout << "Enter Position of element which we have delete from list : " << endl;
                    cin >> deletePos;
                    l.deleteByPosition(deletePos);
                    break;

            case 9: l.reverse();
                    break;

            case 10: l.display();
                    break;

            case 0: exit(0);

            default: cout << "Invalid Input " << endl;

        }

    }while(ch != 0);


    return 0;

}