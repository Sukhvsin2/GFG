/**
 * @file palindromeNumber.cpp
 * @author Sukhvinder Singh (https://suhkvsin2.me)
 * @brief Count the number of digits in a particular number
 * @version 0.1
 * @date 2022-09-06
 * 
 * @copyright Copyright (c) 2022
 * 
 * @complexity O(d) : where d stands for the number of digits
 */

#include<iostream>

using namespace std;

bool palindromeNumber(int n){
    if(n/10 == 0) return true;
    int r = 0, temp = n;

    while(temp > 0){
        r = (r*10) + temp%10;
        temp /= 10;
    }

    return (r == n);
}

int main(){
    cout<<"78987 is palindrome? "<<palindromeNumber(78987)<<endl;
    cout<<"8668 is palindrome? "<<palindromeNumber(8668)<<endl;
    cout<<"8 is palindrome? "<<palindromeNumber(8)<<endl;
    cout<<"21 is palindrome? "<<palindromeNumber(21)<<endl;
    cout<<"367 is palindrome? "<<palindromeNumber(367)<<endl;

    return 0;
}