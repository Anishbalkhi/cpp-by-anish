#include <iostream>
using namespace std;
int power(int n){
    if(n == 0){
        return 1;
    }
    int small  = power(n-1);
    int bigger = 2*small;
    return bigger;
}
int main(){
    int n ;
    cout<<"enter the value";
    cin>>n;
     int ans = power(n);
cout<<ans;
return 0;
}