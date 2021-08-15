#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int getMinNum(vector<vector<int>> v, int index){
    int minNum = 101;
    for(int i = 0; i < v.size(); i++){
        if(v[i][index] < minNum){
            minNum = v[i][index];
        }
    }
    return minNum;
}

int getMaxNum(vector<vector<int>> v, int index){
    int maxNum = -1;
    for(int i = 0; i < v.size(); i++){
        if(v[i][index] > maxNum){
            maxNum = v[i][index];
        }
    }
    return maxNum;
}

// 자기 자신을 평가한 점수가 min, max 인지, 겹치는지 확인 
bool findMinOrMax(vector<vector<int>> v, int index){
    int minNum, maxNum;

    for(int i = 1; i < v.size(); i++){
        minNum = getMinNum(v, index);
        maxNum = getMaxNum(v, index);
    }

    if(v[index][index] == minNum) {
        for(int i = 0; i < v.size(); i++){
            if(i != index && v[i][index] == minNum) return false;
            if(i == v.size() - 1) return true;
        }
    }
    else if(v[index][index] == maxNum){
        for(int i = 0; i < v.size(); i++){
            if(i != index && v[i][index] == maxNum) return false;
            if(i == v.size() - 1) return true;
        }
    }
    else return false;
}



string solution(vector<vector<int>> scores) {
    string answer = "";
    int sum = 0, len = scores.size();
    float avg;

    // 자기 자신이 평가한 점수가 min, max 라면 -1 로 
    for(int i = 0; i < len; i++){
        if(findMinOrMax(scores, i))  
            scores[i][i] = -1;
    }


    for(int i = 0; i < len; i++){
        int div = len; // 나누기
        sum = 0;
        for(int j = 0; j < len; j++){
            if(scores[j][i] == -1)
                div = len - 1;
            else 
                sum += scores[j][i];
        }
        avg = sum/div;
        if(avg >= 90) answer += "A";
        else if(avg >= 80) answer += "B";
        else if(avg >= 70) answer += "C";
        else if(avg >= 50) answer += "D";
        else answer += "F";
    }

    return answer;
}