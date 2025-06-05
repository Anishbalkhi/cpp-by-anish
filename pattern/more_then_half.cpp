#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value: ";
    cin>>n;
    for (int  i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            if(i<j-2){
                cout<<"3 ";
            }
            else{
    
                cout<<"0 ";
            }
        }
        cout<<endl;
        
    }
    
}