#include<iostream>
using namespace std;
void Swap(string &str, int left, int right){
    while(left<right){
    swap(str[left],str[right]);
    left++;
    right--;}
}
int main(){
    string str = "blue eyes";
    int start = 0;
    int end = str.length()-1;
    Swap(str,start,end);
    int left = 0;
    int right = 0;
    while(right <= str.length()){
        
        if(str[right] == ' '||right == str.length()){
            Swap(str,left,right-1);
            left = right + 1;

        }
        right++;
    }  
cout<<str;
    return 0;
}