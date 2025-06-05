#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> arr = {34,32,54,12,31,87,45};
    int n = arr.size();
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n-1-i; j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }

    cout<<"sorted array is:"<<endl;
    for(int i = 0; i < n-1; i++){

        cout<<arr[i]<<endl;
    }
}