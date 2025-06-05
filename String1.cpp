#include<iostream>
#include<string>
using namespace std;
int main(){
    char c[] = {'a','n','i','s','\0'};
    cout<<c<<endl;
    cout<<c<<endl;

    string name = "anish";
    cout<<name<<endl;
    cout<<name<<endl;
for(int i = 0; i<name.length(); i++){
    name[i] = toupper(name[i]);
}
cout<<name;
cout<<name.size();
cout<<name.empty();
name.append("A");
cout<<name<<endl;
name.insert(4,"R");
cout<<name<<endl;
int age = "15";
age.swap(name);
cout<<name;
    return 0;
}