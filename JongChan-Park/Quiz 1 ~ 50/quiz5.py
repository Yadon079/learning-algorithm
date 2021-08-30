# 1, 2, 3 더하기
# https://www.acmicpc.net/problem/9095

def combination(num):
    if num <= 2:
        return num
    elif num == 3:
        return 4

    return combination(num - 1) + combination(num - 2) + combination(num - 3)


T = int(input())

for i in range(T):
    N = int(input())

    print(combination(N))
