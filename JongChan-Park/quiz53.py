# 11050 이항 계수 1
# https://www.acmicpc.net/problem/11050

import sys


def facto(N):
    if N <= 1:
        return 1

    return N * facto(N - 1)


N, K = list(map(int, sys.stdin.readline().split()))

print(facto(N) // (facto(K) * facto(N - K)))
