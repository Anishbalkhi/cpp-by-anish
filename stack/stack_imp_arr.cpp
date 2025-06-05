#include <iostream>
using namespace std;



class stack{
private:
int top;

int arr[10];

public:
stack(){
    top = -1;
};

void push(int x){
    if(top < 9){
        arr[++top] = x;
    }
    else{
        cout<<"stack is overflow";
    }
}



void peek(){
    if(top == -1){
        cout<<"stack is empty";
    }
    else{
        cout<<arr[top];
    }
}


int  pop(){
if(top < 0){
    cout<<"stack is empty";
}


return arr[top--];

}

};


int main(){


    stack s;
    s.push(4);
    s.push(5);
    s.push(7);
    s.push(2);
    s.push(4);
    s.push(8);
    s.pop();
    s.peek();
    return 0;
}