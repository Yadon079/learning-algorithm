#include <iostream>
#include <algorithm>
#define LEN 10

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    int arr[LEN];
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < LEN; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr + LEN);
        cout << arr[7] << '\n';
    }
}