#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers)
{
  vector<int> answer;
  int score[3] = {0, 0, 0};
  vector<int> a = {1, 2, 3, 4, 5};
  vector<int> b = {2, 1, 2, 3, 2, 4, 2, 5};
  vector<int> c = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

  for (int i = 0; i < answers.size(); i++){
    if (answers[i] == a[(i % 5)]){ score[0]++;  }
    if (answers[i] == b[i % 8]){ score[1]++;  }
    if (answers[i] == c[i % 10]){ score[2]++;  }
  }

  int max = 0, index;
  for (int i = 0; i < 3; i++){
    if (max < score[i]){
      max = score[i];
      index = i;
    }
  }
  if (max != 0){
    answer.push_back(index + 1);
    score[index] = 0;
    for (int i = 0; i < 3; i++){
      if (max == score[i]){  answer.push_back(i + 1);  }
    }
  }
  else{
    answer.push_back(1);
    answer.push_back(2);
    answer.push_back(3);
  }
  return answer;
}