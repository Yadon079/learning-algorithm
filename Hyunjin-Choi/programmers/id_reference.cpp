#include <string>
#include <vector>
#include <algorithm>

using namespace std;


// 8월 6일자 구현 중 ...

string solution(string new_id) {
    /* 허용하는 소문자, 숫자, 기호가 담긴 배열 생성 */
    int start_length = new_id.length();
    vector<char> standard = {'-', '_', '.'};
    int start_a = 97;
    int start_num = 48;
    for(int i = 0; i< 26; i++){
        standard.push_back(start_a);
        start_a++;
    }
    for(int i = 0; i < 10; i++){
        standard.push_back(start_num);
        start_num++;
    } 

    /* 1. 대문자 -> 소문자 */
    for(int i = 0; i < new_id.length(); i++){
        if(new_id[i] >= 65 && new_id[i] <= 90) new_id[i] += 32;
    }
    
    /* 2. 표준 문자 제외 제거 */
    for(int i = 0; i < new_id.length();){
        if(!isalpha(new_id[i]) && !isdigit(new_id[i]) && new_id[i] != '-' && new_id[i] != '_' && new_id[i] != '.'){
            new_id.erase(new_id.begin() + i);
        }
        else i++;
    }
    
    /* 3. 연속 마침표 제거 */
    for(int i = 0; i < new_id.length();){
        if(new_id[i] == '.' && new_id[i+1] == '.'){
            new_id.erase(new_id.begin() + i);
        } else i++;
    }
    /* 4. 양 끝단 마침표 제거 */
    if(new_id[0] == '.')  new_id.erase(new_id.begin());
    if(new_id[new_id.length() - 1] == '.') new_id.erase(new_id.length()-1,new_id.length());
    
    /* 5. 길이가 0이면 a 리턴 */
    if(new_id.empty()) new_id.push_back('a');
    
    /* 6. 15 이상이면 자르고 끝 부분만 "." 체크 */
    if(new_id.length() > 15) new_id.erase(15,new_id.length());
    if(new_id[new_id.length()-1] == '.') new_id.erase(new_id.length()-1,new_id.length());

    /* 7. 길이 2 이하면 3으로  */
    char last_char = new_id[new_id.length()-1];
    while(new_id.length() < 3){
        new_id += last_char;
    }

    return new_id;
}