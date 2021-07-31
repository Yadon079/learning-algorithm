#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
  vector<int> answer;
  int works = 0, index = 0, psize = progresses.size();

  while(index != psize){
    for(int i = 0; i < psize; i++){
      progresses[i] += speeds[i];
    }

    if(progresses[index] >= 100){
      while(progresses[index] >= 100 && index != psize){
        works++;
        index++;
      }
      answer.push_back(works);
      works = 0;
    }
  }
  return answer;
}