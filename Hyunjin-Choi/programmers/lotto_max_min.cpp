#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int rank;
    int samenumber = 0, zerocount = count(lottos.begin(), lottos.end(), 0);

    /* 원소가 존재하면 samenumber 1 추가 */
    for(int i = 0; i < 6; i++){
        if(find(win_nums.begin(), win_nums.end(), lottos[i]) != win_nums.end())
            samenumber++;
    }
    if(samenumber + zerocount == 0) rank = 6;
    else{ rank = 7; }
    answer.push_back(rank-(samenumber + zerocount));
    /* 0의 개수 제외, 일치하는 수가 하나도 없다면 6 등으로 마무리 */
    answer.push_back((rank-samenumber == 7 ? 6 : rank-samenumber));
    return answer;
}