/**
 * @file sumOfDigits.cpp
 * @author Sukhvinder Singh (sukhvsin2.me)
 * @brief sum of a digit using recursion
 * @version 0.1
 * @date 2022-09-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

using namespace std;

int sumOfDigits(int n, int res){
    if(n < 1) return res; 
    return sumOfDigits(n/10, n%10+res);
}

int main(){
    cout<<"Sum of Digits of 253: "<<sumOfDigits(253, 0)<<endl;
    cout<<"Sum of Digits of 9987: "<<sumOfDigits(9987, 0)<<endl;
    cout<<"Sum of Digits of 10: "<<sumOfDigits(10, 0)<<endl;
    return 0;
}