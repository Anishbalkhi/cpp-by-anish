#include<iostream>
using namespace std;
int length(char name[]){
    int count = 0;
    int i = 0;
    while(name[i] != '\0'){
        count++;
        i++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter your name : ";
    cin>>name;
    int length1 = length(name);
    cout<<length1;
    return 0;
}