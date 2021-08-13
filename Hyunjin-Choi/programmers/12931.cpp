#include <iostream>
#include <string>

using namespace std;

int solution(int n){
    int answer = 0;
    string sn = to_string(n);
    for(int i = 0; i < sn.length(); i++)
        answer += sn[i] - 48;
    return answer;
}