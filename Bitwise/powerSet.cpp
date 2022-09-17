/**
 * @file powerSet.cpp
 * @author Sukhvinder Singh (sukhvsin2.me)
 * @brief Find all the pairs of particular string
 * @version 0.1
 * @date 2022-09-16
 * @complexity: O(2^n * n)
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>

using namespace std;

int pow(int x, int n){
    int temp = 1;
    while(n--)  temp *= x;
    return temp;
}

void powerSet(string x){
    int size = x.size();
    size = pow(2, size);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if((i & (1<<j)) != 0)
                cout<<x[j];
        }
        cout<<endl;
    }
}

int main(){
    powerSet("abc");
    powerSet("ab");
    return 0;
}