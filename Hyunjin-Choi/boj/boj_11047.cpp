// Ctrl + Alt + C : Compile
// Ctrl + Alt + R : Exec

#include <stdio.h>
#include <iostream>
int main(){
    int N, K, index, res = 0;
    scanf("%d %d", &N, &K);
    int arr[10] = {
        0,
    };

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }

    while (K != 0)
    {
        for (int i = N - 1; i >= 0; i--)
        {
            if (K >= arr[i])
            {
                res += K / arr[i];
                K = K % arr[i];
            }
            if (K == 0)
                break;
        }
    }
    printf("%d", res);
}