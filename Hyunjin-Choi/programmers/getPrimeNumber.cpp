#include <vector>
#include <iostream>
#include <math.h>
using namespace std;


// 소수는 1이상이다.

bool checkPrimeNumber(int pnum){
    int sqrt_pnum = (int) sqrt(pnum);
    for(int i = 2; i <= sqrt_pnum; i++) 
        if(pnum % i == 0) return false;
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
    int pnum;
    for(int i = 0; i < nums.size() -2; i++){
        for(int j = i + 1; j < nums.size() - 1; j++){
            for(int k = j + 1; k < nums.size(); k++){
                pnum = nums[i] + nums[j] + nums[k];
                if(checkPrimeNumber(pnum)){
                    answer++;
                }
            }
        }
    }

    return answer;
}