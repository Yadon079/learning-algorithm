#include <string>
#include <vector>
#include<iostream>

using namespace std;

string solution(int a, int b) {
    string result[8] = {"SUN","MON","TUE","WED","THU","FRI","SAT"};
    int a_ = 1, b_ = 1;
    int index = 5;

    while(1){
        if(a == a_ && b == b_) {
            break;
        }
        b_++;
        index++;
        if(a_ == 2){
            if(b_ == 29){
                a_++;
                b_ = 0;
            }
        }
        else if(a_ == 4 || a_ == 6 || a_ == 9 || a_ == 11){
            if(b_ == 30){
                a_++;
                b_ = 0;
            }
        }
        else{
            if(b_ == 31){
                a_++;
                b_ = 0;
            }
        }
    }
    index %= 7;
    string answer = result[index];
    return answer;
}

int main(){
    string s = solution(1, 1);
    cout << s;
}