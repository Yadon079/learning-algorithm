#include <string>
#include <vector>

using namespace std;
/*
체육복이 한 벌인 학생 : 1
체육복을 도난당한 학생 : -1
여벌 체육복이 있는 학생 : 2
*/
int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int tmp;
    vector<int> student;
    for(int i = 0; i < n; i++){
        student.push_back(1);
    }
    for(int i = 0; i < lost.size(); i++){
        student[lost[i] - 1]--;
    }
    for(int i = 0; i < reserve.size(); i++){
        student[reserve[i] - 1]++;
    }
    
    for(int i = 0; i < n; i++){
        if(student[i] == 0){
            if(student[i - 1] == 2){
                student[i]++;
                student[i - 1]--;
            }
            else if(student[i + 1] == 2){
                student[i]++;
                student[i + 1]--;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        if(student[i] >= 1){
            answer++;
        }
    }
    return answer;
}