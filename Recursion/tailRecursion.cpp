/**
 * @file tailRecursion.cpp
 * @author Sukhvinder Singh (sukhvsin2.me)
 * @brief Tail recusion takes less auxilary space and less time to execute the same
 * solution comare to a regualar recursion function due to less manipulation and 
 * parent not depending on the child result.
 * @version 0.1
 * @date 2022-09-16
 * @complexity: O(N)
 * @reccurence: T(n) = T(n-1) + T(1)
 * @copyright Copyright (c) 2022
 * 
 */
#include<iostream>

using namespace std;

void fun(int n, int k){
    if(n == 0) return;
    cout<<k<<" ";
    fun(n-1, k+1); // making it tail recursive call.
}

/**
 * @brief in this function the parent call doesn't have to depend on
 * child result to do the mainuplation. They take less time and less auxilary space 
 * compare to regular recusive funcitons.
 * @param n 
 * @param k 
 * @return ** int 
 */
int fact(int n, int k){
    if(n==0 || n==1) return k;
    return fact(n-1, n*k); // best example for tail recursive function
}

int main(){
    fun(5, 1);
    cout<<endl;
    fact(3,1);
    cout<<endl;
    return 0;
}