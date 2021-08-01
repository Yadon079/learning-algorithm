#include<iostream>
#include<list>

using namespace std;

void sol(){
    int N, num;
    list<int> ls;

    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> num;
        ls.push_back(num);
    }
    ls.sort();
    ls.unique();
    ls.resize(ls.size());

    for(auto i = ls.begin(); i != ls.end(); i++){
        cout << *i << ' ';
    }
}
int main(){
    sol();
}