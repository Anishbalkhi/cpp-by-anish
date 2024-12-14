#include <iostream>
using namespace std;
int revrse(int arr[], int start, int end ){
    while(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }};
    int print(int arr[], int size){
        for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
        }
    };


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int size = 8;
    int start = 0;
    int end = size-1;
    revrse(arr,start,end);
    print(arr,size);

}