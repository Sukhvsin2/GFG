/**
 * @file powerOfTwo.cpp
 * @author Sukhvinder Singh (sukhvsin2.me)
 * @brief If the given number is power of 2 or not.
 * @version 0.1
 * @date 2022-09-10
 * @complexity O(1)
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>

using namespace std;

bool powerOfTwo(int num){
    if(num == 0) return false;
    return ((num & num-1) == 0);
}

int main(){
    cout<<"4 is power of 2: "<<powerOfTwo(4)<<endl;
    cout<<"6 is power of 2: "<<powerOfTwo(6)<<endl;
    cout<<"4 is power of 2: "<<powerOfTwo(4)<<endl;
    cout<<"7 is power of 2: "<<powerOfTwo(7)<<endl;
    cout<<"16 is power of 2: "<<powerOfTwo(16)<<endl;
    cout<<"32 is power of 2: "<<powerOfTwo(32)<<endl;
    return 0;
}