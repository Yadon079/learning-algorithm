#include <iostream>

using namespace std;

int main(){
    long s;
    cin >> s;
    int cnt = 0;
    long num = 1;
    while(s >= 0){
        s -= num;
        num++;
    }
    if(s < 0)
        cout << num - 2;
    else
        cout << num-1;
    
}