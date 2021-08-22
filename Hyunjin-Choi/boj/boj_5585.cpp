#include<iostream>
using namespace std;

int main(){
    int changes[6] = {500, 100, 50, 10, 5, 1};
    int pay, coin = 0;
    cin >> pay;

    pay = 1000 - pay;

    for(int i = 0; i < 6; i++){
        coin += pay/changes[i];
        pay %= changes[i];
    }

    // coin += pay/500;
    // pay %= 500;
    // coin += pay/100;
    // pay %= 100;
    // coin += pay/50;
    // pay %= 50;
    // coin += pay/10;
    // pay %= 10;
    // coin += pay/5;
    // pay %= 5;
    // coin += pay/1;
    // pay %= 1;

    cout << coin;
}