# 10815 숫자 카드
# https://www.acmicpc.net/problem/10815

import sys

N = int(sys.stdin.readline())
nNums = list(map(int, sys.stdin.readline().split()))
M = int(sys.stdin.readline())
mNums = list(map(int, sys.stdin.readline().split()))

sortN = nNums.sort()

for i in range(0, len(mNums)):
    start, end = 0, N - 1

    while start <= end:
        pivot = (start + end) // 2

        if nNums[pivot] == mNums[i]:
            print(1, end=" ")
            break
        elif nNums[pivot] < mNums[i]:
            start = pivot + 1
        else:
            end = pivot - 1

        if start > end:
            print(0, end=" ")
            break
