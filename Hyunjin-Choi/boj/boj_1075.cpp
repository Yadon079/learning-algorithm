#include<iostream>
#include<vector>
#include<string>

using namespace std;

// N 의 두 자리를 바꿔
// F로 나누어 떨어지게 할 것이다.
// 일단 00 으로 바꾼다.
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    int N, F, num;
    cin >> N >> F;
    num = N % 100;
    N -= num;
    
    while(N % F != 0){
        N++;
    }

    // N 의 끝 두자리를 출력한다.
    string strN = to_string(N);
    int length = strN.size();
    cout << strN[length-2] << strN[length-1];
}