#include <iostream>
#include <string>
#include <stack>
using namespace std;

void print(stack<char> &s){
  while (!s.empty()){
    cout << s.top();
    s.pop();
  }
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  string str;
  stack<char> s;
  getline(cin, str);

  bool tag = false;

  for (char ch : str){

    if (ch == '<') {
      print(s); //stack에 있는거 역으로 출력
      cout << ch;
      tag = true;
    }

    else if (ch == '>') {
      tag = false;
      cout << ch;
    }

    else if (tag){
      cout << ch;
    }

    else{ // tag밖일때
      if (ch == ' '){
        print(s); //공백나오면 역순 출력
        cout << ch;
      }
      else {
        s.push(ch); //아니면 stack에 push
      }
    }
  }
  print(s);

}