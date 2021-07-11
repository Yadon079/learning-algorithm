#include<iostream>
#include <algorithm>

using namespace std;

void my_sort(int arr[], int len){
  int i,j,tmp;
  for(i = 0; i < len; i++){
    for(j = 0; j < len -1; j++){
      if(arr[j] > arr[j+1]){
        tmp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = tmp;
      }
    }
  }
}

// A 약수 : 1이나 N이면 안된다
// N 
int main(){
  int num;
  cin >> num;
  int arr[51];
  for(int i = 0; i < num; i++){
    cin >> arr[i];
  }
  // my_sort(arr, num);
  sort(arr, arr + num);
  int res = arr[0] * arr[num-1];
  
  cout << res;
}