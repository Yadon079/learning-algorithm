#include <iostream>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;
    char campus[x][y];
    int friends = 0;

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin >> campus[i][j];
            if(campus[i][j] == 'P')
                friends++;
        }
        cout << endl;
    }    


    cout << friends;
    // for(int i = 0; i < x; i++){
    //     for(int j = 0; j < y; j++){
    //         cout << campus[i][j];
    //     }
    //     cout << endl;
    // }
}