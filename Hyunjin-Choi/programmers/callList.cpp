#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;


bool solution2(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());
    for(int i = 0; i < phone_book.size() - 1; i++){
        if(phone_book[i+1].find(phone_book[i]) != string::npos) return false;
    }
    return true;
}


bool solution3(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());
    for(int i = 0; i < phone_book.size() - 1; i++){
        if(phone_book[i] == phone_book[i+1].substr(0, phone_book[i].size()))
        // if(phone_book[i+1].find(phone_book[i]) != string::npos) 
            return false;
    }
    return true;
}

int main() {
    vector<string> v = {"21", "12","423","321","9"};
    cout << solution2(v) <<endl;
    cout << solution3(v) <<endl;

}