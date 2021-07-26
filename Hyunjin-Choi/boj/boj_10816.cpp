#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int T;
    int N, K, num;

    cin >> T;
    vector<int> v;

    for(int i = 0; i < T; i++){
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    
    cin >> T;
    vector<int> answer;
    for(int i = 0; i < T; i++){
        cin >> K;
        auto upper = upper_bound(v.begin(), v.end(), K);
        auto lower = lower_bound(v.begin(), v.end(), K);

        answer.push_back(upper - lower);
        //answer[i] = upper - lower; 크기를 지정하면 이 방식으로
    }

    for(auto n : answer){
        cout << n << ' ';
    }
}
