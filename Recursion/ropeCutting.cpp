#include<iostream>

using namespace std;

int ropeCutting(int n, int a, int b, int c){
    if(n == 0) return 0;
    else if(n < 0) return -1;

    int res = max(ropeCutting(n-a, a, b, c), ropeCutting(n-b, a, b, c));
    res = max(res, ropeCutting(n-c, a, b, c));

    if(res == -1) return -1;
    return res+1;
}



int main(){
    cout<<"Rope of length 5, a = 2, b = 5, c = 1: "<<ropeCutting(5, 2, 5, 1)<<endl;
    cout<<"Rope of length 23, a = 12, b = 9, c = 11: "<<ropeCutting(23, 12, 9, 11)<<endl;
    cout<<"Rope of length 5, a = 4, b = 2, c = 6: "<<ropeCutting(5, 4, 2, 6)<<endl;
    cout<<"Rope of length 9, a = 2, b = 2, c = 2: "<<ropeCutting(5, 2, 2, 2)<<endl;
    return 0;
}