#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(string a, string b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    if(numbers[0] == 0) return "0";
    string answer = "";
    vector<string> temp;
    for (int i = 0; i < numbers.size(); i++){
        temp.push_back(to_string(numbers[i]));
    }
    sort(temp.begin(), temp.end(), cmp);
    for (auto num : temp){
        answer.append(num);
        answer += num;
    }
    return answer;
}