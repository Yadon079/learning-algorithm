#include <string>
#include <vector>
#include <math.h>

using namespace std;

bool judge(int n){
    // Not Used
    if(n == 2) return true;
    int n_ = sqrt(n);
    for(int i = 2; i <= n_; i++){
        if(n % i == 0) return false; 
    }
    return true;
}


int solution(int n) {
    int answer = 0;
    // for(int i = 2; i <= n; i++){
    //     if(judge(i)) answer++;
    // }
    vector<int> v;
	for(int i = 1; i <= n; i++){
		v.push_back(i);
	}
	
	for(int i = 2; i <= n; i++){
		for(int j = 2*i; j <= n; j+= i)
			v[j] = 0;
	}
	
	for(int i = 2; i <= n; i++){
        if(v[i] != 0) answer++;
    }
    return answer;
}