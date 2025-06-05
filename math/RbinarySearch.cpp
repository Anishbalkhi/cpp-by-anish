#include<iostream>
using namespace std;
bool BinarySearch(int n, int arr[] , int target,int start, int end ){
    if(n==0){
        return false;
    }
     int mid = start + (end - start)/2;
    if(target == arr[mid]){
        return true;
    }
    else{
        if(target > arr[mid]){
            return BinarySearch(n,arr,target,mid+1,n);
        }
        else{
            return BinarySearch(n,arr,target,start,mid-1);
        }
    }
}
int main(){
    int n = 8;
    int target = 65;
    int arr[8] = { 1,2,3,4,5,6,65,87};
 int start = 0;
    int end = n - 1;
  
    bool ans = BinarySearch(n,arr,target,start,end);
    if(ans){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    return 0;
}