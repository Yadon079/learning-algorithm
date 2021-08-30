#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

void not_solution(){
    int n, num;
    long long sum = 0;
    cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    if(n == 1) {
        cout << v[0];
        return;
    }

    for(int i = 0; i < n-1; i++){
        sum += v[i] +v[i+1];
        v[i+1] = sum;
    }
    cout << sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue<int, vector<int>, greater<int>> q;
    int num;
    int n;
    cin >> n;

    while(n--){
        cin >> num;
        q.push(num);
    }
    int x, y;
    int sum = 0;
    while(q.size() != 1){
        x = q.top();
        q.pop();
        y = q.top();
        q.pop();
        sum += x + y;
        q.push(x + y);
    }
    cout << sum;
}