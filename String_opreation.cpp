#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "anis";
    cout<<s<<endl;

    s.push_back('h');
    cout<<s<<endl;

    s.pop_back();
    s.pop_back();
    s.pop_back();
    cout<<s<<endl;
    string a = "ritambara";
    char b[] = {'a','n','i','s','h' ,'\0'};
    cout<<a<<endl;
    cout<<b;
    return 0;

}