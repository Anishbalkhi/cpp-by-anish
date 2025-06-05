#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n ;
    cout<<"enter the value =  ";
	 cin>>n;
	for(int i = 0; i<n; i++){
	    for(int j = 0; j< n; j++){
	        if(i == j){
	            cout<<"0 ";
	        }
	        else{
	            cout<<"1 ";
	        }
	    }
	    cout<<endl;
	}
	

}