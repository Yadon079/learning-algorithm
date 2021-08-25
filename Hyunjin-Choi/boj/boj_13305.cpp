#include<iostream>
#include <vector>

using namespace std;

int main(){
    int n, num; // 도시의 수, tmpNum
    long long  total = 0; 
    vector<int> dist, oilPrice;
    dist.push_back(0); // dist 요소가 하나 부족하니 dummy push

    cin >> n;
    for(int i = 0; i < n - 1; i++){
        cin >> num;
        dist.push_back(num);
    }
    for(int i = 0; i < n; i++){
        cin >> num;
        oilPrice.push_back(num);
    }
    // location : 현재 위치
    // 첫 정류소는 무조건 주유
    long long location = oilPrice[0];
    total = location * dist[1];

    for(int i = 1; i < n; i++){
        // 현재 주유소 가격이 더 싸다면
        // 현재 주유소 가격보다 싼 주유소를 만날 때 까지 주유
        if(location < oilPrice[i]){
            total += location * dist[i+1];
        }
        // 현재 주유소 가격이 더 비싸다면
        // 다음 주유소로 이동해서 주유한다.
        else{
            location = oilPrice[i];
            total += location * dist[i+1];
        }
    }
    cout << total;
}