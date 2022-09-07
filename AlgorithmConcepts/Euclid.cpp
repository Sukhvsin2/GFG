/**
 * @file gcd.cpp
 * @author Sukhvinder Singh (https://sukhvsin2.me)
 * @brief GCD - greatest common divisor 
 * @version 0.1
 * @date 2022-09-06
 * 
 * @copyright Copyright (c) 2022
 * @complexity O(min(a,b)) and Euclid version would be: O(log(min(a,b)))
 */
#include<iostream>

using namespace std;

int GCDImp(int a, int b){
    if(b == 0) return a;

    return GCDImp(b, a%b);
}

int main(){
    cout<<"GDC of 4 and 6 is: "<<GCDImp(4,6)<<endl;
    cout<<"GDC of 100 and 200 is: "<<GCDImp(100, 200)<<endl;
    cout<<"GDC of 7 and 13 is: "<<GCDImp(7,13)<<endl;
    return 0;
}