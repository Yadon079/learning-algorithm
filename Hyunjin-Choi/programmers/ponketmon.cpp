#include <vector>
#include <algorithm>
using namespace std;


int findSameNum(vector<int> v){
    int result = v.size();
    for(int i = 0; i < v.size()-1; i++){
        if(v[i] == v[i+1]) result--;
    }
    return result;
}

int solution(vector<int> nums){
    int answer = nums.size()/2;
    sort(nums.begin(),nums.end());
    // nums.resize( unique(nums.begin(), nums.end()) - nums.begin();
    int deleteSameNumber = findSameNum(nums);
    if(deleteSameNumber > answer)  return answer;
    else return deleteSameNumber;
}