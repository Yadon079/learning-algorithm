#include<iostream>
#include<string>

using namespace std;

int solv(int num){
    long res = 0;
    while(1){
        if(num < 10){
            res += num;
            return res;
        }

        int div = 10; // 입력받은 수의 길이를 측정
        int inputMinusNum = 1; // 999일 경우 (999 - 100) * 길이(3) 을 카운트

        while((num / div) != 0){ 
            div *= 10; 
        }
        div /= 10;

        string length_div = to_string(div);
        int length_div_integer = (int) length_div.length();
        // length_div - 1 만큼 *10

        for(int i = 0; i < length_div_integer - 1; i++){
            inputMinusNum *= 10;
        }
        res += (num - inputMinusNum + 1) * length_div_integer; 
        num = inputMinusNum - 1; // 1000, 100, 10 은 카운트 못하니까 위에서 + 1 해준다.
        // cout << num << endl;
    }
    return res;
}

int main(){
    int num;
    cin >> num;
    cout << solv(num);
}