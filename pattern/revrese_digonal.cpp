#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the value of row: ";
    cin>>m;
    cout<<"enter the value of column";
    cin>>n;
    for(int  i = 0; i < m; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            if(i+j >=4 && i>=j-4){
                cout<<"0 ";
            }
            else{
    
                cout<<"  ";
            }
        }
        cout<<endl;
        
    }
    
}