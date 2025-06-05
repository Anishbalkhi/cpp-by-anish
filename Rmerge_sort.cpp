#include<iostream>
using namespace std;
int merge(int n , int arr[]){
    int i,temp;
    if(arr[i]>arr[i+1]){
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        i++;
    }
    else{
        i++;
    }
}
int mergesort(int n, int arr[], int start , int end){
    if(n==1){
        return 0 ;
    }
    int mid = start + (end - start)/2;
    mergesort(int n , int arr[], int start, int mid);
    mergesort(int n , int arr[], int mid+1, int end);
    merge(int n, int arr[]);
}
int main(){
    int n = 8;
    int arr[8] = {1,2,3,54,35,34,65,76};
    int start = 0;
    int end = n - 1;

}