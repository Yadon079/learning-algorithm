#include <string>
#include <vector>

using namespace std;

bool getDivCount(int num){
    int count = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0) count++;
    }
    return !(count % 2);
}

int solution(int left, int right) {
    int answer = 0;
    for(int i = left; i <= right; i++){
        if(getDivCount(i)) answer += i;
        else answer -= i;
    }
    return answer;
}
