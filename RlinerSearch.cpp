#include<iostream>
using namespace std;
bool LinerSearch(int n , int arr[], int target){
   
   
   
    if(arr[0] == target){
        return true;
    }
    else{
     int search = LinerSearch(n-1,arr+1,target);
     return search;
    }
}
int main(){
    int n = 6;
    int target = 5;
    int arr[6] = { 1,2,43,4,5,4};
     bool ans = LinerSearch(n, arr, target);
    if(ans){
        cout<<"the values is found";
    }
    else{
        cout<<"value is not found";
    }
     return 0;
}