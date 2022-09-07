/**
 * @file checkPrime.cpp
 * @author Sukhvinder Singh (https://sukhvsin2.me)
 * @brief Check the number is prime or not
 * @version 0.1
 * @date 2022-09-06
 * 
 * @copyright Copyright (c) 2022
 * @complexity O(n) and Improve Sol. would be: O(sqrt()) and Best Way: 
 */
#include<iostream>
#include<cmath>

using namespace std;

bool checkPrimeBest(int n){
    if(n == 1) return false;
    else if(n == 2 || n == 3 ) return true;
    else if(n%2 == 0 || n%3 == 0) return false;
    
    for(int i=5; i*i<=n; i=i+6){
        if(n % i == 0 || n%(i+2) == 0) return false;
    }
    return true;
}

bool checkPrimeImp(int n){
    int temp = sqrt(n);
    for(int i=2;i<=temp;i++){
        if(n%i == 0) return false;
    }
    return true;
}

bool checkPrime(int num){
    if(num==1) return false;
    int i = num-1;
    while(i > 1){
        if(num%i == 0 ) return false;
        i--;
    }
    return true;
}

int main(){
    cout<<"Check Prime for 13 : "<<checkPrimeBest(13)<<endl;
    cout<<"Check Prime for 14 : "<<checkPrimeBest(14)<<endl;
    cout<<"Check Prime for 101 : "<<checkPrimeBest(101)<<endl;
    cout<<"Check Prime for 121 : "<<checkPrimeBest(121)<<endl;
    cout<<"Check Prime for 1031 : "<<checkPrimeBest(1031)<<endl;
    return 0;
}