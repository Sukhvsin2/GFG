/**
 * @file palindrome.cpp
 * @author Sukhvinder Singh (sukhvsin2.me)
 * @brief Check string if it's palindrome or not using recursion.
 * @version 0.1
 * @date 2022-09-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>

using namespace std;

int palindrome(string s, int k){
    int size = s.size() - k;
    if((s.size()/2 - k) == 0 || (s.size()/2 - k) == 1) return 1;
    if(s[k] == s[size-1]) return palindrome(s, k+1);
    else return 0;
}

int main(){
    cout<<"Palindrome abbcbba: "<<palindrome("abbcbba", 0)<<endl;
    cout<<"Palindrome abba: "<<palindrome("abba", 0)<<endl;
    cout<<"Palindrome geeks: "<<palindrome("geeks", 0)<<endl;
    return 0;
}