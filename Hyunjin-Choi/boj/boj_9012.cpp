// pair로 정렬한 다음
#include<iostream>
#include<vector>

using namespace std;

void yes_or_no(string s);

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T; //테스트 케이스
    string s; // 입력 스트링

    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> s;
        yes_or_no(s);
    }
}

void yes_or_no(string s){
    int lcnt = 0; // ( 괄호의 수
    for(int i = 0; i < s.length(); i ++){
        if(s[i] == '('){
            lcnt++;
        }
        else{
            lcnt--;
        }
        if(lcnt < 0){
            // lcnt가 한 번이라도 -가 되면 ) 괄호가 엇나간 것이다.
            cout << "NO" << '\n';
            return;
        }
    }
    // lcnt가 엇나가진 않았더라도 괄호의 총 개수가 다르면 NO이다.
    if(lcnt == 0) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}