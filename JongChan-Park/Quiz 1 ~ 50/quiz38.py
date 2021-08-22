# 10829 이진수 변환
# https://www.acmicpc.net/problem/10829

def recur(num):        
    if num == 0:
        return ""

    if num % 2 == 0:
        num //= 2        
        return recur(num) + "0"
    elif num % 2 == 1:
        num //= 2
        return recur(num) + "1"


N = int(input())

print(recur(N))

# 내장함수 이용
print(bin(N)[2:])
