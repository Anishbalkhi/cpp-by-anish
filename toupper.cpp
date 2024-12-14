#include<iostream>
using namespace std;
int main(){
    string ch = "anis";
    string c = ch;
    cout<<ch<<endl;
    for(int i = 0; i<ch.length(); i++){
    c[i]  = ch[i] - 'a' +'A';}
    cout<<c;

    return 0;
}