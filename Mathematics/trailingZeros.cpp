/**
 * @file palindromeNumber.cpp
 * @author Sukhvinder Singh (https://suhkvsin2.me)
 * @brief Count the trailing zeros of a given number's factorial
 * @version 0.1
 * @date 2022-09-06
 * 
 * @copyright Copyright (c) 2022
 * 
 * @complexity O(logn)
 */
#include<iostream>

using namespace std;

int countZeros(int n){
    int counter = 0;
    for(int i=5; i<=n;i=i*5){
        counter = counter + n/i;
    }
    return counter;
}

int trailingZero(int n){
    return countZeros(n);
}

int main(){
    cout<<"Zeros in 5 Factorial: "<<trailingZero(5)<<endl;
    cout<<"Zeros in 10 Factorial: "<<trailingZero(10)<<endl;
    cout<<"Zeros in 20 Factorial: "<<trailingZero(20)<<endl;
    cout<<"Zeros in 100 Factorial: "<<trailingZero(100)<<endl;
    return 0;
}