#include <iostream>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt_0 = 0, cnt_1= 0, res;
    char c;

    
    // if(s[0] == '0') cnt_0++;
    // else cnt_1++;

    for(int i = 0; i < s.length() - 1; i++){
        if(i+1 == s.length() - 1){
            if(s[i] == '0') cnt_0++;
            else if(s[i] == '1') cnt_1++;
        }
        if(s[i] == s[i+1]) {
            continue;
        }
        else{
            if(s[i] == '0') cnt_0++;
            else if(s[i] == '1') cnt_1++;
        }
    }
    cout << cnt_0 << endl << cnt_1 << endl;
    res = (cnt_0 > cnt_1) ? cnt_1 : cnt_0;
    cout << res;
}