#include<iostream>

using namespace std;

// 막대기 길이는 64, 32, 16, 8, 4, 2, 1
// 2진법으로 했을 때 1 의 개수
int main(){
    int X, cnt = 0;
    cin >> X;

    while(X != 0){
        if(X % 2 == 1){
            cnt++;
        }
        X /= 2;
    }
    cout << cnt << '\n';
}