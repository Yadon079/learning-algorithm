#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;

    long long t1,t2;
    vector<vector<long long>> v;
    vector<long long> tmp;

    for(int i = 0; i < n; i++){
        cin >> t1 >> t2;
        // 처음부터 반대로 push
        tmp.push_back(t2);
        tmp.push_back(t1);
        v.push_back(tmp);
        tmp.clear();
    }
    sort(v.begin(), v.end());

    // 가장 빨리 끝나는 t2를 찾고
    // t2와 일치 혹은 더 큰 t1을 은 다음 (정렬되어있으니 복수요소들 비교할 필요 x)

    long long end = v[0][0];
    int count = 1;
    for(int i = 1; i < n; i++){
        if(v[i][1] >= end){
            count++;
            end = v[i][0];
        }
    }

    cout << count;
}