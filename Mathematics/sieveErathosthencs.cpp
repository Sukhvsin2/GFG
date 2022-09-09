#include<iostream>
#include<vector>

using namespace std;

bool checkPrime(int n){
    if(n == 1) return false;
    else if(n == 2 || n == 3 ) return true;
    else if(n%2 == 0 || n%3 == 0) return false;
    
    for(int i=5; i*i<=n; i=i+6){
        if(n % i == 0 || n%(i+2) == 0) return false;
    }
    return true;
}

void sieve(int n){
    vector<int> arr(n+1, 1);

    for(int i=2; i<=n;i++){
        if(checkPrime(i)){
            cout<<i<<" ";
            for(int j=i*i;j<=n;j=j+i)
                arr[j] = 0;
        }
    }
    cout<<endl;
}

// void sieve(int n){
//     vector<int> arr(n+1,1);
//     // *arr = {1};
//     arr[0] = arr[1] = 0;
//     for(int i=2;i*i<=n;i++){
//         if(i && checkPrime(i)) {
//             for(int j=i*i;j<=n;j = j+i)
//                 arr[j] = 0;
//         }
//     }

//     for(int i=2;i<=n;i++)
//         if(arr[i]) cout<<i<<" ";
//     cout<<endl;
// }

void mySolution(int n){
    int temp = 2;
    while(temp <= n){
        // cout<<temp<<endl;
        if(checkPrime(temp)){
            cout<<temp<<" ";
        }
        temp++;
    }
    cout<<endl;
}

int main(){
    sieve(10);
    sieve(23);
    return 0;
}