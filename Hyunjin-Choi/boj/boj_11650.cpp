#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
    vector<pair<int, int>> v;
    // v.push_back(pair<int, int>(1, -1));
    int n, x, y;
    cin >> n;

    for(int i = 0; i < n; i++){
      cin >> x >> y;
      v.push_back(pair<int, int>(x, y));
    }

    sort(v.begin(), v.end());
    
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }
}