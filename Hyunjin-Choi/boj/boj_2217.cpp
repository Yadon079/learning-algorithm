
/*
로프 k로 무게 100을 올릴때 각각의 로프에는 100/k 중량이 걸린다.
로프로 들어올릴 수 있는 물체의 최대 중량은? 
로프를 모두 사용할 필요는 없다.
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(int i, int j){
    return i > j;
}

int main(){
    int n, tmpNum, maxWeight;
    cin >> n;

    vector<int> v;
    vector<int> use;

    for(int i = 0; i < n; i++){
        cin >> tmpNum;
        v.push_back(tmpNum);
    }
    sort(v.begin(), v.end(), compare);

    maxWeight = v[0];
    
    for(int i = 1; i < n; i++){
        if(v[i] * (i+1) >= maxWeight){
            maxWeight = v[i] * (i+1);
        }
    }
    cout << maxWeight;
}