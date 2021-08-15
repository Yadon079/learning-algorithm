#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int n_;

bool comp(string i, string j){
    if(i[n_] != j[n_]){
        return i[n_] < j[n_];
    }
    return i < j;
}

vector<string> solution(vector<string> strings, int n) {
    n_ = n;
    sort(strings.begin(), strings.end(), comp);
    return strings;
}