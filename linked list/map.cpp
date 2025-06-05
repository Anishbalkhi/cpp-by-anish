#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {

map<string,string>type{
    {"apple","apple is a fruit"}, 
    {"mango", "mango is a fruit"},
     {"tomato", "tomato is a veg"}};

cout<<type["mango"]<<endl;

map<int , int>num{
    {1,2},
    {2,3}
};



type["graps"]= "graps is a fruit";
cout<<type["graps"];
    return 0;
}