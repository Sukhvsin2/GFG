#include<iostream>

using namespace std;

void bitwiseOperators(){
    int a = 3, b = 6;
    cout<<"3 & 6: "<<(a&b)<<endl;
    cout<<"3 | 6: "<<(a|b)<<endl;
    cout<<"3 ^ 6: "<<(a^b)<<endl;
}

int main(){
    bitwiseOperators();
    return 0;
}