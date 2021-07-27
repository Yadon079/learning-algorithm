#include<iostream>
#include<string>

using namespace std;

void solv(int number){
    string s = to_string(number);
    int res = 0;
    for(int i = 0; i < s.length(); i++){
        if (s[i] == '1') {
            res += 2;
        } else if (s[i] == '0') {
            res += 4;
        } else{
            res += 3;
        }
    }
    cout << res + s.length() + 1 << '\n';
}

int main(){
    int number;
    while (1){
        cin >> number;
        if(number == 0) break;
        solv(number);
    }
    
}