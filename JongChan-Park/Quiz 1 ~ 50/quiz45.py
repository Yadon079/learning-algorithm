# 2839 설탕 배달
# https://www.acmicpc.net/problem/2839

import sys

N = int(sys.stdin.readline())
cnt = 0

while N >= 0:
    if N % 5 == 0:
        cnt += N // 5
        print(cnt)
        break

    N -= 3
    cnt += 1

    if N < 0:
        print(-1)
        break
