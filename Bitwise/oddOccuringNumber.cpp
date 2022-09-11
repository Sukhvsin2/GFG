/**
 * @file oddOccuringNumber.cpp
 * @author Sukhvinder Singh (sukhvsin2.me)
 * @brief If the given array has odd occuring number or not.
 * @version 0.1
 * @date 2022-09-10
 * @complexity O(n)
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>
#include <map>

using namespace std;

// void oddOccuringNumber(int *arr, int size){
//     map<int, int> res;
//     for(int i=0; i<size; i++){
//         if(res.find(arr[i]) != res.end())
//             res[arr[i]]++;
//         else
//             res.insert({arr[i], 1});
//     }
//     for(int i=0;i<size;i++)
//         if(arr[i] & 1) cout<<arr[i]<<" ";
//     cout<<endl;
// }

void oddOccuringNumber(int arr[], int size){
    int res = 0;
    // a^b will XOR both numbers leaving a odd number behind
    // which will not cancel with pair of itself
    // all the even occuring number will cancel with eachother
    for(int i = 0; i<size; i++)
        res = res ^ arr[i];

    cout<<"Odd Occuring number is :"<<res<<endl;
}

int main(){
    int arr[] = {4, 3, 4, 4, 4, 5, 5};
    oddOccuringNumber(arr, sizeof(arr)/sizeof(arr[0]));

    int arr2[] = {8, 7, 7, 8, 8};
    oddOccuringNumber(arr2, sizeof(arr2)/sizeof(arr2[0]));
    return 0;
}