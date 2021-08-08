# 1712 손익분기점
# https://www.acmicpc.net/problem/1712

import sys

A, B, C = map(int, sys.stdin.readline().split())

# 반복문으로 쓰면 시간 초과, 수학적으로..

if C - B <= 0:
    print(-1)
else:
    print(A // (C - B) + 1)
