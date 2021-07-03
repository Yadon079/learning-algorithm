#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;


class xypair{
  public:
  int x, y;

  xypair(int _x, int _y){
    x = _x;
    y = _y;
  }
};

bool comapre(xypair &a, xypair &b){
  if(a.x < b.x){
    return true;
  }
  else if(a.x == b.x){
    if(a.y < b.y) return true;
    else return false;
  }
  else{
    return false;
  }
}


int main()
{
  ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

  int n, x, y;
  cin >> n;
  vector<xypair> v;
  for(int i = 0; i < n; i++){
    cin >> x >> y;
    v.push_back(xypair(x,y));
  }
  sort(v.begin(), v.end(), comapre);

  for(int i = 0; i < n; i++){
    cout << v[i].x << " " << v[i].y << '\n';
  }
}