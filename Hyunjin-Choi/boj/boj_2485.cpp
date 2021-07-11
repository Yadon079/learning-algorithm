#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int getGCD(vector<int> diffs){
  int min = diffs.front();
  int i = 0;
  while(1){
    if(diffs[i] % min == 0){
      i++;
    }
      if(i == diffs.size() && *diffs.end() % min == 0) 
        return min;
    else if(diffs[i] % min != 0){
      i = 0;
      min--;
    }
  }
}


int main(){
  int tree, gcd; // 기존 나무의 수, 최대공약수
  int diff, diffsum = 0; // 나무 사이의 거리
  vector<int> diffs;
  vector<int> trees;
  
  cin >> tree;

  int tmp;
  for(int i = 0; i < tree; i++){
    cin >> tmp;
    trees.push_back(tmp);
  }

  for(int i = 1; i < tree; i++){
    diffs.push_back(trees[i] - trees[i-1]);
    diffsum += (trees[i] - trees[i-1]);
  }
  sort(diffs.begin(), diffs.end());
//  cout << "diffs : ";

//   for(auto i = diffs.begin(); i < diffs.end(); i++){ // 출력확인
//     cout << *i << ' ';
//   }

  cout << "size :" << diffs.size() << endl;
  cout << '\n';
  gcd = getGCD(diffs);
//  cout << gcd << '\n';

  int res = (diffsum/gcd) - tree + 1;
  cout << res;
}
