#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int mid = s.length()/2;
    if(s.length() % 2 == 0){
        char first_answer = s[mid - 1];
        char second_answer = s[mid];
        string answer;
        answer += first_answer;
        answer += second_answer;
        return answer;
    }
    else{
        char first_answer = s[mid];
        string answer;
        answer += first_answer;
        return answer;
    }
}