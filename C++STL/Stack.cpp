#include<iostream>
#include<stack>
using namespace std;

int main(){

// stack - Last In First Out(LIFO)
   stack<string> s;

   s.push("Reshma");
   s.push("Jay");
   s.push("Nutan");
   s.push("Nikita");

   cout << "Top Element : " << s.top() << endl;

   s.pop();
   cout << "Top Element : " << s.top() << endl;

   cout << "Empty or not : " << s.empty() << endl;

   cout << "Size of Stack : " << s.size() << endl;


}