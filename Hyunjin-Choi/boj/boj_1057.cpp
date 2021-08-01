#include<iostream>

using namespace std;

// 다음 라운드에서 몇 번이 되는지 확인할 것

int main(){
    int round, max_round, div;
    int p1, p2;
    cin >> round >> p1 >> p2;

    int res = 1;

    while(1){
        if((p1 + 1) / 2 == (p2 + 1) / 2)
            break;
        else{
            p1 = (p1 + 1) / 2;
            p2 = (p2 + 1) / 2;
            res++;
        }
    }

    cout << res;
}
