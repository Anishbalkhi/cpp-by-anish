#include <iostream>
#include <limits.h>
using namespace std;
int mini(int arr[] , int size ){
    int minval = INT_MAX;
    for(int i = 0; i < size; i++){
        if(arr[i]<minval){
            minval = arr[i];
        }
    }
    return minval;
};
int maxi( int arr[] , int size){
    int maxval = INT_MIN;
    for(int i = 0 ; i < size; i++){
        if(arr[i]>maxval){
            maxval = arr[i];
        }
    }
    return maxval;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;
    int minval = mini( arr, size);
    int maxval = maxi( arr , size);
    cout<< "the minimun value is = "<<minval<<endl; 
    cout<< "the maximum value is = "<<maxval<<endl;
    return 0;
}