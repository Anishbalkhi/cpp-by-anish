#include<iostream>
#include<string>
using namespace std;
int main()
{
string s = "anis balkhi";
string s1 ;
s1.insert(0,s);
cout<<s1;
cout<<s;
reverse(s.begin(),s.end());
cout<<s;
return 0;
}