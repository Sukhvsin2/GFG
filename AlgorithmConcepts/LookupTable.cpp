/**
 * @file LookupTable.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me)
 * @brief 
 * @version 0.1
 * @date 2022-09-10
 * @algorithmName Lookup Table Method
 * @complexity O(1)
 * @copyright Copyright (c) 2022
 * 
 * 
 */

#include <iostream>

using namespace std;

int table[256];

void initilize(){
    table[0] = 0;
    for(int i=1; i<256; i++){
        table[i] = (i&1) + table[i/2];
    }
}

int countSetBits(int num){
    initilize();
    int res = table[num & 0xff];
    num = num>>8;
    
    res += table[num & 0xff];
    num = num>>8;

    res += table[num & 0xff];
    num = num>>8;

    res += table[num & 0xff];
    num = num>>8;

    return res;
}

int main(){
    cout<<"Set Bits for 5: "<<countSetBits(5)<<endl;
    cout<<"Set Bits for 7: "<<countSetBits(7)<<endl;
    cout<<"Set Bits for 13: "<<countSetBits(13)<<endl;
    cout<<"Set Bits for 71: "<<countSetBits(71)<<endl;
    return 0;
}