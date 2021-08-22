# 가장 큰 수
# https://programmers.co.kr/learn/courses/30/lessons/42746?language=python3

def solution(numbers):
    answer = [str(num) for num in numbers]
    
    answer.sort(key=lambda x: x * 3, reverse=True)
    
    return ''.join(answer)
  
  
  
numbers1 = [6, 10, 2]
numbers2 = [3, 30, 34, 5, 9]

print(solution(numbers2))