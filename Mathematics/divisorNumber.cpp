/**
 * @file divisorNumber.cpp
 * @author Sukhvinder Singh (sukhvsin2.me)
 * @brief Find all divisors of a number in assending order.
 * @version 0.1
 * @date 2022-09-08
 * @complexity O(sqrt(n))
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>

using namespace std;

void divisorNumber(int n){
    int i;
    for(i=1;i*i<=n;i++){
        if(n%i == 0)
            cout<<i<<" ";
    }

    for(; i>=1;i--){
        if(n%i == 0) cout<<n/i<<" ";
    }
    cout<<endl;
}

int main(){
    divisorNumber(15);
    divisorNumber(100);
    divisorNumber(7);
    return 0;
}