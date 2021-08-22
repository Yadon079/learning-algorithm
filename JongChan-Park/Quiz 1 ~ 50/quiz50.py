# 17266 어두운 굴다리
# https://www.acmicpc.net/problem/17266

import sys

def bs(x, M):
    if x[1] - x[0] > M:
        return 0
    
    if x[-1] - x[-2] > M:
        return 0
    
    for i in range(1, len(x) - 2):
        if (x[i + 1] - x[i]) / 2 > M:
            return 0
    
    return 1

N = int(sys.stdin.readline()) # 굴다리 길이
M = int(sys.stdin.readline()) # 가로등 개수
x = [0] + list(map(int, sys.stdin.readline().split())) + [N] # M 개의 가로등 위치

start, end = 0, N
height = 0

while start <= end:
    # 중간 위치 잡기
    M = (start + end) // 2
    
    if bs(x, M):
        end = M - 1
        height = M
    else:
        start = M + 1

print(height)