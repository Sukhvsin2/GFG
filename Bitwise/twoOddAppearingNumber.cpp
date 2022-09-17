#include<iostream>
#include<map>

using namespace std;

/**
 * @brief It's a way to solve it but not efficently
 * @complexity: O(n^2)
 * 
 */
// void twoOddApearing(int arr[], int size){
//     map<int, int> res;
//     res[arr[0]] = 1;
//     for(int i=1; i<size; i++){
//         if(res.find(arr[i]) != res.end())
//             res[arr[i]]++;
//         else
//             res[arr[i]] = 1;
//     }

//     for(auto i: res)
//         if(i.second == 1) cout<<i.first<<" ";
//     cout<<endl;
// }

void twoOddApearing(int arr[], int size){
    int res = 0;
    for(int i=0;i<size;i++) res = res ^ arr[i];
    int res1 = 0, res2 = res1;
    res = res & ~(res - 1);
    for(int i=0; i<size; i++){
        if((arr[i] & res) != 0) res1 = res1 ^ arr[i];
        else res2 = res2 ^ arr[i];
    }
    cout<<"1st Odd appearing Element: "<<res1<<endl;
    cout<<"2nd Odd appearing Element: "<<res2<<endl<<endl;

}

int main(){
    int arr[] = {3, 4, 3, 4, 5, 4, 4, 6, 7, 7};
    twoOddApearing(arr, 10);

    int arr1[] = {20, 15, 20, 16};
    twoOddApearing(arr1, 4);
    return 0;
}