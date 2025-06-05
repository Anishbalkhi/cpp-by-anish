#include <iostream>
using namespace std;
int count(int n){
    if(n == 0){
         return 0;
    }
    cout<<n<<" ";
int small = count(n-1);
int bigger = small;
return bigger;
}
int main(){
    int n;
    cout<<"enter the value :"<<" ";
    cin>>n;
    int ans = count(n);
    cout<<ans;
    return 0;
}