# 부족한 금액 계산하기
# https://programmers.co.kr/learn/courses/30/lessons/82612?language=python3


def solution(price, money, count):
    answer = 0
    
    for i in range(1, count + 1):
        answer += i * price
    
    if answer - money <= 0: 
        return 0

    return answer - money