#include <string>
#include <vector>
#include <cctype>


using namespace std;
 // -32 소 ->  대
// https://programmers.co.kr/learn/courses/30/lessons/12930
string solution(string s) {
    string answer = "";
    int index = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            index = 0;
            answer += s[i];
        }
        else if(index % 2 == 0){
            if(s[i] >= 97)
                answer += s[i] - 32;
            else
                answer += s[i];
            index++;
        }
        else{
            if(s[i] >= 97)
                answer += s[i];
            else
                answer += s[i] + 32;
            index++;
        }
    }
    return answer;
}