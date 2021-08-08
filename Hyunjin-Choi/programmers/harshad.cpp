#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    int div = 0, origin_x = x;

    for(int i = 10; i < 100000; i *= 10){
        div += (x % i) / (i/10);
    }
    if(origin_x % div == 0) {
        return true;
    }
    else {
        return false;
    }
}
