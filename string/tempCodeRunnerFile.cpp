#include <iostream>
using namespace std;
int reverse(int arr[], int size){
    int rarr[size];
    for(int i = 0; i<size ; i++){
        rarr[i] = arr[size-i-1];
    }
    for(int i = 0; i < size; i++)
    {
        cout<<rarr[i]<<" ";
    }
    
}


int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;
    reverse(arr, size);

}