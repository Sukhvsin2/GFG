/**
 * @file sumOfN.cpp
 * @author Sukhvinder Singh (sukhvsin2.me)
 * @brief find the sum of N natural number using recursion
 * @version 0.1
 * @date 2022-09-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>

using namespace std;

int sumOfN(int n, int k){
    if(n < 1) return 0;
    else if(n == 1) return k;
    return sumOfN(n-1, k+n);
}

int main(){
    cout<<"Sum of 2 natural number: "<<sumOfN(2, 1)<<endl;
    cout<<"Sum of 4 natural number: "<<sumOfN(4, 1)<<endl;
    cout<<"Sum of 5 natural number: "<<sumOfN(5, 1)<<endl;
    return 0;
}