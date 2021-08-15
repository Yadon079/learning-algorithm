#include <string>
#include <vector>
// https://programmers.co.kr/learn/courses/30/lessons/12925
using namespace std;

int solution(string s) {
    int answer = 0;
    string tmp = "";

    for(int i = 0; i < s.size(); i++){  
        if(s[i] == '+' || s[i] == '-') continue;
        tmp += s[i]; 
    }
    answer = stoi(tmp);
    if(s[0] == '-'){  answer *= -1;  }
    
    return answer;
}