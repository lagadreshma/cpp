#include<iostream>
using namespace std;

class node{

    public :
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
    void merge(llist, llist);
    void display();

};

node* llist:: getnode(){

    node* temp = new node();
    cout << "Enter the data : " << endl;
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

        cout << "Do you want to add a Node(Y/N) : " << endl;
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
    p = head;
    temp = getnode();

    while(p -> next != NULL){
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

           temp -> next = p -> next;
           p -> next = temp;

        }

    }else{
        cout << "Invalid Position." << endl;
    }


}

void llist:: merge(llist l1, llist l2){

    node* p;
    p = l1.head;

    while(p -> next != NULL){
        p = p -> next;
    }

    p -> next = l2.head;

}

void llist:: display(){

    node* p;
    p = head;

    while(p != NULL){
        cout << p -> data << " ";
        p = p -> next;
    }
    cout << endl;

}

int main(){

    int ch;
    llist l1;
    llist l2;

    do{
    cout << "##############################################" << endl;
    cout << "1. Create l1" << endl;
    cout << "11. Create l2" << endl;
    cout << "2. AddAtBegin l1" << endl;
    cout << "22. AddAtBegin l2" << endl;
    cout << "3. AddAtEnd l1" << endl;
    cout << "33. AddAtEnd l2" << endl;
    cout << "4. AddAtPosition l1" << endl;
    cout << "44. AddAtPosition l2" << endl;
    cout << "5. Display l1" << endl;
    cout << "55. Display l2" << endl;
    cout << "6. Merge(l1, l2)" << endl;
    cout << "66. Merge(l2, l1)" << endl;
    cout << "###################################################" << endl;

    cout << "Enter Your choice : " << endl;
    cin >> ch;

      switch(ch){

         case 1: l1.create();
                 break;
         case 11: l2.create();
                  break;

         case 2: l1.addAtBegin();
                 break;
         case 22: l2.addAtBegin();
                  break;

         case 3: l1.addAtEnd();
                 break;
         case 33: l2.addAtEnd();
                  break;

         case 4: int pos;
                 cout << "Enter Position : " << endl;
                 cin >> pos;
                 l1.addAtPosition(pos);
                 break;
         case 44: int position;
                  cout << "Enter Position : " << endl;
                  cin >> position;
                  l2.addAtPosition(position);
                  break;

        case 5:  l1.display();
                 break;
        case 55: l2.display();
                 break;

        case 6:  l1.merge(l1,l2);
                 break;
                 
        case 0: exit(0);

        default: cout << "Invalid Input : " << endl;

      }

    }while(ch != 0);

    return 0;

}