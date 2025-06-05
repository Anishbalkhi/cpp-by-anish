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
            if(j == n / 2 || i == n/2){
                cout<<"$ ";
            }
            else{
    
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }
    
}