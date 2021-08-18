#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string expression, tempStr;
    vector<int> v;
    int sum = 0, tempNum = 0;

    cin >> expression;

    for(int i = 0; i < expression.length(); i++){
        tempStr += expression[i];
        if(expression[i+1] == '+' || expression[i+1] == '-' || i+1 == expression.length()){
            v.push_back(stoi(tempStr));
            tempStr = "";
        }
    }

    for(int i = v.size()-1; i >= 0; i--){
        if(v[i] <= 0 || i == 0){
            if(i == 0){
                sum += v[i] + tempNum;
            }
            else{
                sum += v[i] - tempNum;
                tempNum = 0;
            }
        }
        else if(v[i] > 0){
            tempNum += v[i];
        }
    }

    cout << sum;
}