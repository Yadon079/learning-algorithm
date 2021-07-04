// Ctrl + Alt + C : Compile
// Ctrl + Alt + R : Exec

#include <iostream>
#include<vector>

using namespace std;

vector<int> lotto;

void func(vector<int> &vec, int index, int cnt)
{
    if(cnt == 6){
        for(int num: lotto){
            cout << num << " ";
        }
        cout << '\n';
        return;
    }

    int n = vec.size();
    if(n == index) return;
    
    //  index 번 째를 고른 경우
    lotto.push_back(vec[index]);
    func(vec, index+1, cnt+1);
    
    // index 번 째를 고르지 않은 경우
    lotto.pop_back();
    func(vec, index+1, cnt);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        int k;
        cin >> k;
        if (k == 0)
            break;
        vector<int> vec(k);

        for (int i = 0; i < k; i++)
        {
            cin >> vec[i];
        }
        func(vec, 0, 0);
        cout << '\n';
    }
}