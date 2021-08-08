using namespace std;

long long solution(int price, int money, int count){
    long long lmoney = (long long) money;
    for(int i = 1; i <= count; i++){ lmoney -= price * i; }
    return (lmoney >= 0) ? 0 : -lmoney;
}