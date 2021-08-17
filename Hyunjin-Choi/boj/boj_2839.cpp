#include <iostream>

using namespace std;

int main(){
  int n, three, fiv;
  cin >> n;

  int tmp = n % 5;
  fiv = n/5;

  // 14kg 일 경우 tmp는 4kg
  if(fiv >= 0){
    // 4kg은 3으로 나누어 떨어지지 않기 때문에 5kg을 하나 제거
    while(tmp % 3 != 0){
      fiv--;
      tmp += 5;
    }
    // 4kg -> 9kg 으로 변경한 뒤 3kg 봉지 담기
    if(tmp % 3 == 0){
      three = tmp/3;
    }
  }
  
  // 5kg을 모두 제거했음에도 3kg으로도 안나누어진다면
  if(fiv < 0){
    cout << -1;
    return 0;

  }
  cout << fiv + three;
}