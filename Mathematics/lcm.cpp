/**
 * @file lcm.cpp
 * @author Sukhvinder Singh (https://sukhvsin2.me)
 * @brief LCM - lowest common multiple 
 * @version 0.1
 * @date 2022-09-06
 * 
 * @copyright Copyright (c) 2022
 * @complexity O(a*b - max(a,b)) and LCMImp - O(log(min(a,b)))
 */
#include<iostream>

using namespace std;

int GCDImp(int a, int b){
    if(b == 0) return a;

    return GCDImp(b, a%b);
}

int LCMImp(int a, int b){
    return ((a*b)/GCDImp(b, a%b));
}


int LCM(int a, int b){
    int res = a > b ? a : b;
    while(1){
        if(res%a == 0 and res%b == 0) return res;
        res++;
    }
    return res;
}

int main(){
    cout<<"LCM of 4 and 6 is: "<<LCMImp(4,6)<<endl;
    cout<<"LCM of 12 and 15 is: "<<LCMImp(12, 15)<<endl;
    cout<<"LCM of 2 and 8 is: "<<LCMImp(2,8)<<endl;
    return 0;
}