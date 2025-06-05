#include<iostream>
using namespace std;
int main(){
    char name[20];
    
    cout<<"enter your name :";
    cin>>name;
    name[2] = '\0';
    cout<<"my name is "<<name;
    return 0;
}