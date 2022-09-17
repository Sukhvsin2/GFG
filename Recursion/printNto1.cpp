/**
 * @file printNto1.cpp
 * @author Sukhvinder Singh (sukhvsin2.me)
 * @brief Print N to 1 numbers in recursive form.
 * @version 0.1
 * @date 2022-09-16
 * @complexity: O(N)
 * @reccurence: T(n) = T(n-1) + T(1)
 * @auxilarySpace: O(N) 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>

using namespace std;

void printN(int n){
    if(n==0) return;
    cout<<n<<" ";
    printN(n-1);
}

void print1ToN(int n){
    if(n==0) return;
    print1ToN(n-1);
    cout<<n<<" ";
}


int main(){
    cout<<"N to 1: \n";
    printN(5);
    cout<<endl;
    printN(2);
    cout<<endl;

    cout<<endl;
    cout<<"1 to N: \n";
    print1ToN(5);
    cout<<endl;
    print1ToN(2);
    cout<<endl;
    return 0;
}