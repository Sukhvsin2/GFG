/**
 * @file countDigits.cpp
 * @author Sukhvinder Singh (https://suhkvsin2.me)
 * @brief Count the number of digits in a particular number
 * @version 0.1
 * @date 2022-09-06
 * 
 * @copyright Copyright (c) 2022
 * 
 * @complexity O(d) : where d stands for the number of digits
 */

#include <iostream>

using namespace std;

int countDigits(int n){
    int num = 0;

    while(n > 0){
        n = n/10;
        num++;
    }
    return num;
}

int main(){
    cout<<"Program to count the Digits in a Number."<<endl;
    cout<<"Number is 9235: "<<countDigits(9235)<<endl;
    cout<<"Number is 38: "<<countDigits(38)<<endl;
    cout<<"Number is 7: "<<countDigits(7)<<endl;
    return 0;
}