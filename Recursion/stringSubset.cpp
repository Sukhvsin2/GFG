#include<iostream>

using namespace std;

void stringSubset(string s, string curr = "", int size = 0){
    if(size == s.size()){
        cout<<"'"<<curr<<"' ";
        return;
    }
    stringSubset(s, curr, size+1);
    stringSubset(s, curr+s[size], size+1);
}

int main(){
    stringSubset("AB");
    cout<<endl;
    stringSubset("ABC");
    cout<<endl;
    return 0;
}