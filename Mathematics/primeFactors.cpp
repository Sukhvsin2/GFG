/**
 * @file primeFactors.cpp
 * @author Sukhvinder Singh (https://sukhvsin2.me)
 * @brief Find the prime factors of a given number
 * @version 0.1
 * @date 2022-09-06
 * 
 * @copyright Copyright (c) 2022
 * @complexity printPrimeFactors : O(sqrt(n)) and mySol: 
 */
#include<iostream>
#include<cmath>

using namespace std;

// bool checkPrimeBest(int n){
//     if(n == 1) return false;
//     else if(n == 2 || n == 3 ) return true;
//     else if(n%2 == 0 || n%3 == 0) return false;
    
//     for(int i=5; i*i<=n; i=i+6){
//         if(n % i == 0 || n%(i+2) == 0) return false;
//     }
//     return true;
// }

void primeFactors(int num){
    if(num <= 1) return;

    int i = 2;
    while(num > 1){
        if( num % i == 0){
            cout<<i<<" ";
            num /= i;
        }else
            i++;
    }
}

void printPrimeFactors(int n){
    if(n <= 1) return;

    while(n%2 == 0){
        cout<<"2"<<" ";
        n/=2;
    }
    while(n%3 == 0){
        cout<<"3"<<" ";
        n/=3;
    }

    for(int i=5; i*i<=n; i = i+6){
        while(n%i == 0){
            cout<<i<<" ";
            n /= i;
        }
        while(n % (i+2) == 0){
            cout<<(i+2)<<" ";
            n /= (i+2);
        }
    }
    if(n > 3)
        cout<<n<<" ";
}


int main(){
    cout<<"Check Prime Factors for 12 : ";
    primeFactors(12);
    cout<<endl;
    cout<<"Check Prime Factors for 13 : ";
    primeFactors(13);
    cout<<endl;
    cout<<"Check Prime Factors for 315 : ";
    printPrimeFactors(315);
    cout<<endl;
    cout<<"Check Prime Factors for 84 : ";
    printPrimeFactors(84);
    cout<<endl;
    return 0;
}