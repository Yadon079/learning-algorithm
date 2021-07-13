#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

bool primeNum(int num){ // 시간초과
    if(num % 2 == 0) return false;
    for(int i = 3; i < num; i++){
        if(num % i == 0) 
            return false;
        if(i > num/2) 
            return true;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int m, n, pnum;
    vector<int> v;

    cin >> m >> n;

    for(int i = m; i <= n; i++){
        pnum = sqrt(i);
        if(i == 2 || i == 3){ // 2나 3일때?
            v.push_back(i);
            continue;
        }
        if((i % 2) == 1){// 홀수이면
            for(int j = 2; j <= pnum; j++){
                if(i % j == 0) break;
                if(j == pnum) v.push_back(i);
            }
        }
    }

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << '\n';
    }

}