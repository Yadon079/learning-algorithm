#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector<string> v;
  string tmp;
  int n;
  cin >> n;

  for(int i = 0; i < n; i++){
    cin >> tmp;
    v.push_back(tmp);
  }
  char c;

  for(int i = 0; i < v[0].size(); i++){
    c = v[0][i];
    for(int j = 0; j < v.size(); j++){
      if(c != v[j][i]) {
        c = '?';
        break;
      }
    }
    cout << c;
  }
}