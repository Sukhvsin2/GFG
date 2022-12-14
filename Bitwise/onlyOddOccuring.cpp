/**
 * @file onlyOddOccuringNumber.cpp
 * @author Sukhvinder Singh (sukhvsin2.me)
 * @brief If the given array has all numbers occuing one time only,
 *        find the missing number.
 * @version 0.1
 * @date 2022-09-10
 * @complexity O(n)
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include <map>

using namespace std;

void oddOccuringNumber(int arr[], int size){
    int res = 0;
    // a^b will XOR both numbers leaving a odd number behind
    // which will not cancel with pair of itself
    // all the even occuring number will cancel with eachother
    for(int i = 0; i<size; i++)
        res = res ^ arr[i];
        
    for(int i = 1; i<=size+1; i++)
        res = res ^ i;
    
    cout<<"Odd Occuring number is :"<<res<<endl;
}

int main(){
    int arr[] = {1};
    oddOccuringNumber(arr, sizeof(arr)/sizeof(arr[0]));

    int arr2[] = {1, 5, 3, 2};
    oddOccuringNumber(arr2, sizeof(arr2)/sizeof(arr2[0]));
    return 0;
}