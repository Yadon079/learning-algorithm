#include<iostream>
#include<list>

using namespace std;

bool comp(string a, string b){
  // 문자열 길이로 정렬하되, 같은 길이는 알파벳 순으로 정렬한다.
  if(a.length() != b.length())
    return (a.length() < b.length());
  else return a < b;
}

bool uniquecomp(string a, string b){
  return a == b;
}

// 백준 1181번
int main_1181(){
  int num;  // 반복할 횟수
  string s; // 입력받을 문자열
  list<string> ls;  // 문자열 리스트

  cin >> num;
  for(int i = 0; i < num; i++){
    cin >> s;
    ls.push_back(s);
  }
  
  //unique - > resize
  // ***정렬 후 제거해야 떨어져있는 같은 문자열이 붙어서 제거된다.***
  ls.sort(comp);
  ls.unique();
  ls.resize(ls.size());

  list<string>::iterator iter = ls.begin(); 
  for(iter = ls.begin(); iter != ls.end(); iter++){
    cout << *iter << '\n';
  }

}