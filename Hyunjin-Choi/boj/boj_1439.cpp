#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt_0 = 0, cnt_1= 0, res;

    for(int i = 0; i < s.length(); i++){
        if(i == 0) continue;
        if(s[i] != s[i-1]){
            if(s[i-1] == '0') cnt_0++;
            else cnt_1++;
        }
        if(i == s.length() - 1){
            if(s[i] == '0') cnt_0++;
            else cnt_1++;
        }
    }

    // cout << cnt_0 << endl << cnt_1 << endl;
    res = (cnt_0 > cnt_1) ? cnt_1 : cnt_0;
    cout << res;
}