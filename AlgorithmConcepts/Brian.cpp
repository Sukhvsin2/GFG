/**
 * @file Brian.cpp
 * @author Sukhvinder Singh (https://www.sukhvsin2.me)
 * @brief AND operation of N with N-1, if the result if 1 counter++ which means
 *        still got 1's present in the number.
 * @version 0.1
 * @date 2022-09-10
 * @algorithmName Brian Kerningam's Algorithm
 * @complexity O(set bit count) means equal to how many 1's present in the binary code 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

using namespace std;

int countSetBits(int num){
    int counter = 0;
    while(num > 0){
        num = (num & (num-1));
        counter++;
    }
    return counter;
}

int main(){
    cout<<"Set Bits for 5: "<<countSetBits(5)<<endl;
    cout<<"Set Bits for 7: "<<countSetBits(7)<<endl;
    cout<<"Set Bits for 13: "<<countSetBits(13)<<endl;
    cout<<"Set Bits for 71: "<<countSetBits(71)<<endl;
    return 0;
}