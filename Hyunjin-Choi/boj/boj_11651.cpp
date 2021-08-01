#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(const pair<int, int>&i, const pair<int, int>&j) 
{
    if (i.second == j.second){
        // y(두번째)가 같은 경우 i(첫번째) 오름차순
        return i.first < j.first;
    }
    else return i.second < j.second; 
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    vector<pair<int, int>> v;
    int n, x, y;

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        v.push_back(pair<int, int>(x,y));
    }

    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}