#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {4,3,21,2,54,32};
    int n = arr.size();
    for(int i = 0; i<n-1; i++){
        int SI = i;
        for(int j = i+1; j < n-1; j++){
            if(arr[j]<arr[SI]){
                SI = j;
            }
        }
        swap(arr[SI], arr[i]);

        

    }



    cout<<"the sorted array is:"<<endl;

    for(int i = 0 ; i<n-1; i++){
        cout<<arr[i]<<endl;
    }
}
