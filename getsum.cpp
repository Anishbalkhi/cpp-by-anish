#include<iostream>
using namespace std;

int getSum(int n, int arr[]){
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }else{
    int sum = arr[0] ;
    sum = sum + getSum(n-1,arr+1);
    return sum;}
}
int main(){
    int n = 7;
    int arr[7] = { 1,2,3,4,5,6,7};
int ans =   getSum(n,arr);
cout<<ans;
return 0;
    
}