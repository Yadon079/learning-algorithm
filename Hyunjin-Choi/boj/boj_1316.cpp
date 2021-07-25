#include<iostream>
#include<algorithm>

using namespace std;

// 다음 단어와 다르면 find한다. 

bool groupCheck(string s){
    for(int i = 0; i < s.length() - 1; i++){
        // if(s[i] == s[i+1]) continue;
        if(s[i] != s[i+1]){
            // 같은게 있다면 false
            for(int j = i + 2; j < s.length(); j++){
                if(s[i] == s[j]) return false;
            }
        }
    }
    return true;
}

int main(){
    string s;
    int T, cnt = 0;
    cin >> T;

    for(int i = 0; i < T; i++){
        cin >> s;
        if(groupCheck(s)) cnt++;
    }
    cout << cnt;
}