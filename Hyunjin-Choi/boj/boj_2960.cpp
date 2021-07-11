#include<iostream>

using namespace std;

int main(){
  int arr[1002];
  int N, K, res, count = 0, del = 2;
  cin >> N >> K;

  for(int i = 0; i < N; i++){
    arr[i + 1] = i + 1;
  }

  while(count != K){
    for(int i = 1; i*del <= N; i++){
      if(arr[del * i] != 0){
        if(count + 1 == K){
          res = arr[del * i];
          count++;
          break;
        }
        arr[del * i] = 0;
        count++;
      }
    }
    del++;
  }
  cout << res;
  return 0;
}