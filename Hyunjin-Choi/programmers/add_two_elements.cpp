#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int i,j, num;

    for(i = 0; i < numbers.size()-1; i++){
        for(j = i + 1; j < numbers.size(); j++){
            num = numbers[i] + numbers[j];
            answer.push_back(num);
        }
    }
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    return answer;
}