#include <string>
#include <vector>
#include <math.h>

using namespace std;

string Invert_Three(int n){
  string Result = "";
  while (n > 0){
    char Temp = (n % 3) + '0'; // ascii
    Result += Temp;
    n /= 3;
  }
  return Result;
}

int solution(int n) {
  int answer = 0;
  string Three = Invert_Three(n);
  int p = 0;
  int stonum, num;
  for(int i = Three.length()-1; i >=0; i--){
    if(Three[i] != '0'){
      stonum = Three[i] - 48;
      answer += stonum * pow(3, p);
    }
    p++;
  }
  
  return answer;
}
