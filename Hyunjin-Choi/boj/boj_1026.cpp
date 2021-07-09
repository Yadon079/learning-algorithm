#include<iostream>
#include <algorithm>

bool compare(int i, int j){
  return j < i;
}

using namespace std;
// S 는 배열 AB 각 요소를 곱한 값의 합
// B순서를 고정한 상태로 A를 재배열한다.
int main_1026(){
  int *A, *B;
  int N, S = 0;
  cin >> N;
  A = new int[N];
  B = new int[N];

  for(int i = 0; i < N; i++){
    cin >> A[i];
  }
  for(int i = 0; i < N; i++){
    cin >> B[i];
  }

  sort(A, A + N);
  sort(B, B+N,compare);

  for(int i = 0; i < N; i++){
    S += A[i] * B[i];
  }
  cout << S;
  delete A, B;

}