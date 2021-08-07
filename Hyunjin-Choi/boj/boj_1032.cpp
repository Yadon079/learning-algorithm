#include <iostream>
#include <vector>

using namespace std;

int main(){
    char answer[50];
    vector<string> v;
    string tmp;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }
    int length = v[0].size();

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < length; j++){
            
        }
    }
}