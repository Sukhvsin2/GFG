/**
 * @file baseCases.cpp
 * @author Sukhvinder Singh (sukhvsin2.me)
 * @brief How to choose the best base case to stop recursion
 * @version 0.1
 * @date 2022-09-16
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>

using namespace std;

int fact(int n, int k){
    if(n < 1) return k;
    return fact(n-1, k*n);
}

int fibo(int n){
    if(n<0) return 0;
    else if(n==1) return 1;
    return (fibo(n-1) + fibo(n-2));
}

int main(){
    cout<<"Factorial of 4: "<<fact(4, 1)<<endl;
    cout<<"Factorial of 0: "<<fact(0, 1)<<endl;
    cout<<endl;
    cout<<"3rd fibonacci number: "<<fibo(5)<<endl;
    return 0;
}