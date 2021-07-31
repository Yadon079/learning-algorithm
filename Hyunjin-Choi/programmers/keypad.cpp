#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

  int phone[5][4] = 
    {-1,-1,-1,-1,
    -1, 1, 2, 3,
    -1, 4, 5, 6,
    -1, 7, 8, 9,
    -1, 10, 0, 10};

pair<int, int> find_index(int number){
  pair<int, int> index;
  for(int i = 1; i < 5; i++){
    for(int j = 1; j < 4; j++){
      if(phone[i][j] == number){
        index = make_pair(i, j);
        return index;
      }
    }
  }
}

string solution(vector<int> numbers, string hand)
{
  string answer;
  pair<int, int> left, right, mid;
  left = make_pair(4,1);
  right = make_pair(4,3);

  for(int i = 0; i < numbers.size(); i++){
    if(numbers[i] % 3 == 1){
      answer.append("L");
      left = find_index(numbers[i]);
    }
    else if(numbers[i] % 3 == 0 && numbers[i] != 0){
      answer.append("R");
      right = find_index(numbers[i]);
    }
    else{
      mid = find_index(numbers[i]);
      int diff = abs(abs(mid.first - left.first) + abs(mid.second - left.second)) 
                -abs(abs(mid.first - right.first) + abs(mid.second - right.second));
      if(diff == 0){
        if(hand == "right"){ 
          answer.append("R"); 
          right = find_index(numbers[i]);
        }
        else{ 
          answer.append("L"); 
          left = find_index(numbers[i]);
        }
      }
      else if(diff < 0){
        answer.append("L");
        left = find_index(numbers[i]);
      }
      else{
        answer.append("R");
        right = find_index(numbers[i]);
      }
    }
  }
  return answer;
}
