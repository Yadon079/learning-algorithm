#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, t2;
    int cnt = 0;

    vector<int> s1, s2, p;
    int tmp1, tmp2;

    for(int i = 0; i < t; i++){
        cin >> t2;
        for(int j = 0; j < t2; j++){
            cin >> tmp1 >> tmp2;
            s1.push_back(tmp1);
            s2.push_back(tmp2);
            p.push_back(0);
        }
    }
}