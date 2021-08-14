#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' ') answer += ' ';
        
        else if (s[i] <= 90){
            if(s[i] + n >= 91){
                answer += s[i] + n - 26;
            }
            else{
                answer += s[i] + n;
            }
        }
        
        else{
            if(s[i] + n >= 123){
                answer += s[i] + n - 26;
            }
            else{
                answer += s[i] + n;
            }
        }
    }
    return answer;
}