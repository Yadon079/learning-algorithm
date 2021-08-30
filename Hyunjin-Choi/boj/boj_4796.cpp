#include <iostream>
#include <vector>

using namespace std;

/*
l : 중에 사용가능한 날
p : 연속하는 날
v : 강산이의 휴가
*/

int main(){
    int l, p, v;
    int res = 0, caseCount = 1;
    vector<int> rv;

    while(1){
        cin >> l >> p >> v;
        if(l == 0 && p == 0 && v == 0) break;
        res = (v/p * l);
        v %= p;
        if(v >= l){
            res += l;
        }
        else{
            res += v;
        }
        rv.push_back(res);
    }
    for(int i = 0; i < rv.size(); i++){
        cout << "Case "<< i+1 <<": " << rv[i] << '\n';
    }
}