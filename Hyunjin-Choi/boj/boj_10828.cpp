#include<iostream>
using namespace std;

int mystack[10000];
int top = 0;

void solution(string s){
    if (s == "push"){
        cin >> mystack[top];
        top++;
    }
    else if(s == "pop"){
        if(top == 0) 
            cout << "-1" << '\n';
        else{
            cout << mystack[top - 1] << '\n';
            top--;
        }
    }
    else if(s == "size"){   cout << top << '\n';    }
    else if(s == "empty"){
        if(top == 0) cout << "1" << '\n';
        else cout << "0" << '\n';
    }
    else if(s == "top"){
        if(top == 0) cout << "-1" << '\n';
        else cout << mystack[top - 1] << '\n';
    }
}

int main(){
    int N;
    string instruct;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> instruct;
        solution(instruct);
    }
}