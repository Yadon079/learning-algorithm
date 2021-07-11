#include<iostream>
#include<algorithm>

using namespace std;

void BinaryExist(int *arr, int low, int high, int findValue)
{
    if (low > high){
        cout << "0\n";
        return;
    }
    else{
        int mid = (low + high) / 2;
        if (findValue > arr[mid])
            return BinaryExist(arr, mid+1, high, findValue);
        else if (findValue < arr[mid])
            return BinaryExist(arr, 0, mid-1, findValue);
        else{
            cout << "1\n";
            return;
        }
    }
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

  int n,m;
  cin >> m;
  int marr[100001];
  for(int i = 0; i < m; i++){
    cin >> marr[i];
  }

  sort(marr, marr + m);

  cin >> n;
  int narr[100001];
  for(int i = 0; i < n; i++){
    cin >> narr[i];
  }

  for (int i = 0; i < n; i++)
    BinaryExist(marr, 0, m - 1, narr[i]);
}