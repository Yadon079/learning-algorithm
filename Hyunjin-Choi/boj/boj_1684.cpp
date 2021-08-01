#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int *arr;
    arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int D = arr[0];

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] % D != arr[i + 1] % D)
        {
            D--;
            i--;
        }
    }
    cout << D;
}