#include<iostream>

using namespace std;

void bitwiseOperators(){
    cout<<"\nBitwise Operators: \n";
    int a = 3, b = 6;
    cout<<"3 & 6: "<<(a&b)<<endl;
    cout<<"3 | 6: "<<(a|b)<<endl;
    cout<<"3 ^ 6: "<<(a^b)<<endl;
    cout<<"~"<<a<<": "<<(~a)<<endl;
}

void shiftOperators(){
    int x = 3;
    cout<<"\nShift Operators: \n";
    cout<<"Left Shift Operator: \n";
    cout<<x<<"<<1: "<<(x<<1)<<endl;
    cout<<x<<"<<2: "<<(x<<2)<<endl;
    int y = 4;
    cout<<x<<"<<"<<y<<": "<<(x<<y)<<endl<<endl;
    
    cout<<"Right Shift Operator: \n";
    cout<<x<<">>1: "<<(x>>1)<<endl;
    cout<<x<<">>2: "<<(x>>2)<<endl;
}

int main(){
    bitwiseOperators();
    shiftOperators();
    return 0;
}