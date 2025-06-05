#include <iostream>
using namespace std;

class Node{
public:
int data;
Node*next;
};

class stack{
private:
Node*top;

public:
stack(){
    top = nullptr;
};


void push(int x){
Node*newNode = new Node();
newNode->data = x;
newNode->next = top;
top = newNode;

}



int pop(){
    if(top == nullptr){
        cout<<"stack is empty";
    }
    else{
        Node*temp = top;
        top = top->next;
        delete temp;
    }
}

void peek(){
    cout<<top->data;;
}



};


int main(){
    stack s;
    s.push(8);
    
    s.push(5);
    s.push(3);
    s.pop();
    s.peek();

    return 0;
}