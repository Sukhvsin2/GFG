#include<iostream>

using namespace std;

double countingPower(int number, int power){
    double answer = 1.0;
    int flag = 0;
    if(power < 0){
        power *= -1;
        flag = 1;
    }
    
    while(power > 0){
        if(power % 2 == 1){
            answer *= number;
            power--;
        }else{
            number *= number;
            power /= 2;
        }
    }

    if(flag) return 1.0/answer;
    
    return answer;

}

int main(){
    cout<<"2 power -10: "<<countingPower(2, -10)<<endl;
    return 0;
}