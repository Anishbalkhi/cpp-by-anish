#include <iostream>
using namespace std;


class Queue{
private:
int  size = 10,currsize = 0, start = -1, end = -1, q[10];
public:


void push(int x){
    if(currsize == size){
        cout<<"queue is full ";
    }
    else if (currsize == 0)
    {
        start = 0;
        end = 0;
        
    }
    else{
        end = (end+1)%size;
           }

           q[end] = x;
           currsize++;
           }


int pop(){

    
    int val = q[start];
    if(currsize == 0){
        cout<<"underflow";
    }
    else if(currsize == 1){
        start = -1,
        end = -1;
    }
    else{
     start = (start+1)%size;
    }

    currsize--;
        return val;
}

void peek(){
    cout<<q[start];
}

};


int main(){
    Queue a;

    a.push(9);
    a.push(3);
    a.pop();
    a.peek();


    return 0;
}
