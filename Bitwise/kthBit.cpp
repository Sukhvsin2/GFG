#include<iostream>

using namespace std;

bool kthBit(int n, int k){
    if(k == 0) return false;
    // using left shift operator
    // if((n & (1<<(k-1))) != 0) return true;
    if(((n >> (k-1)) & 1) == 1) return true;
    return false; 
}

int main(){
    cout<<"5, 1: "<<kthBit(5,1)<<endl;
    cout<<"5, 3: "<<kthBit(5,3)<<endl;
    cout<<"8, 2: "<<kthBit(8,2)<<endl;
    cout<<"0, 3: "<<kthBit(0,3)<<endl;
    return 0;
}