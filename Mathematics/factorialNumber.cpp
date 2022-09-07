/**
 * @file factorialNumber.cpp
 * @author Sukhvinder Singh (https://suhkvsin2.me)
 * @brief Return the factorial of a number
 * @version 0.1
 * @date 2022-09-06
 * 
 * @copyright Copyright (c) 2022
 * 
 * @complexity - O(n)
 * @optimumSolution Iterative solution
 */

#include<iostream>

using namespace std;

/**
 * @brief Solution with itetrative method
 * @recurrenceRelation T(n)
 * @auxilarySpace O(1)
 * @param n 
 * @return ** int 
 */
int fact(int n){
    int res = 1;
    for(int i=1;i<=n;i++){
        res = res * i;
    }
    return res;
}
/**
 * @brief Solution with recursive algorithm
 * @recurrenceRelation T(n) = T(n-1) + O(1)
 * @auxilarySpace O(n)
 * @param n 
 * @return ** int 
 */
int factorial(int n){
    if(n == 1 || n==0)
        return 1;
    return n * factorial(n-1);
}

int main(){
    cout<<"Factorial of 4: "<<factorial(4)<<endl;
    cout<<"Factorial of 4: "<<fact(6)<<endl;
    cout<<"Factorial of 4: "<<factorial(0)<<endl;
    return 0;
}