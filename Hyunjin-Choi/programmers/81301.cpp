#include <string>
#include <vector>
#include<iostream>

using namespace std;
// n인경우 기존 +1 을 한다
// or string vector 에 하나씩 푸시해서 판별한다
vector<int> numbers = {448, 323, 346, 536, 444, 426, 340, 546, 529, 428};
int isNumber(int num){
    for(int i = 0; i < 10; i++){
        if(num == numbers[i]) {
            return i + 1; // 0 을 리턴하는 경우가 있다.
        }
    }
    return 0;
}

int solution(string s) {
    int findIndex;
    string answers = "";
    int checkAlpha = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >= 48 && s[i] <= 57) answers += s[i];
        else{
            if(s[i] == 110) {
                checkAlpha += (s[i] + 1);
                findIndex = isNumber(checkAlpha);
                if(findIndex){
                    answers += (findIndex + 47);
                    checkAlpha = 0;
                }
            }
            else{
                checkAlpha += s[i];
                findIndex = isNumber(checkAlpha);
                if(findIndex){
                    answers += (findIndex + 47);
                    checkAlpha = 0;
                }
            }
        }
    }
    int answer = stoi(answers);
    return answer;
}
