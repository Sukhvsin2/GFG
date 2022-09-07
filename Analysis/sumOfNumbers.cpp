#include<iostream>

using namespace std;

void sumOfNum(int n){
    int sum = n;
    while(n--){
        sum+=n;
    }
    cout<<"Sum: "<<sum<<endl;
}

int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;

    sumOfNum(n);

    return 0;
}