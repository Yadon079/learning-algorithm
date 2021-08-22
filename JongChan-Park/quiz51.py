# 2805 나무 자르기
# https://www.acmicpc.net/problem/2805

import sys

N, M = list(map(int, sys.stdin.readline().split()))
trees = list(map(int, sys.stdin.readline().split()))

start, end = 1, max(trees)

while start <= end:
    pivot = (start + end) // 2

    total = 0

    for tree in trees:
        if tree > pivot:
            total += tree - pivot

    if total < M:
        end = pivot - 1
    elif total >= M:
        start = pivot + 1

print(end)