#include<iostream>
#include<vector>

using namespace std;

int subS(vector<int> &arr, int n, int sum){
    if(n == 0) {
        if(sum == 0) return 1;
        return 0;
    }
    
    return(subS(arr, n-1, sum) + subS(arr, n-1, sum-arr[n-1]));
}

int subsetSum(vector<int> &arr, int temp, int sum, int i = 0){
    if(arr.size() == i) {
        if(temp == sum) return 1;
        return 0;
    }
    int a = subsetSum(arr, temp, sum, i+1);
    temp += arr[i];
    int b = subsetSum(arr, temp, sum, i+1);

    return (a+b);
}

int main(){
    vector<int> arr{10, 5, 2, 3, 6};
    cout<<"10, 5, 2, 3, 6 -> 8: "<<subS(arr, arr.size(), 8)<<endl<<endl;
    
    vector<int> arr1 = {1, 2, 3};
    cout<<"1, 2, 3 -> 4: "<<subS(arr1, arr1.size(), 4)<<endl<<endl;
    
    
    vector<int> arr2 = {10, 20, 15};
    cout<<"10, 20, 15 -> 25: "<<subS(arr2, arr2.size(), 25)<<endl<<endl;
    
    vector<int> arr3 = {10, 0, 15, 25};
    cout<<"10, 0, 15, 25 -> 25: "<<subS(arr3, arr3.size(), 25)<<endl<<endl;
    return 0;
}