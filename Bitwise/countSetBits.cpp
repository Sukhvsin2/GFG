#include<iostream>

using namespace std;

int countSetBits(int num){
    int counter = 0;
    while(num > 0){
        counter = counter + (num & 1);
        // or these statements same thing
        // if((num & 1) == 1)
        //     counter++;
        num = num>>1;
    }
    return counter;
}

int main(){
    cout<<"Set Bits for 5: "<<countSetBits(5)<<endl;
    cout<<"Set Bits for 7: "<<countSetBits(7)<<endl;
    cout<<"Set Bits for 13: "<<countSetBits(13)<<endl;
    cout<<"Set Bits for 73: "<<countSetBits(73)<<endl;
    return 0;
}