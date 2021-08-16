# 상호 평가
# https://programmers.co.kr/learn/courses/30/lessons/83201

def checkGrade(avg):
    if avg >= 90:
        return 'A'
    elif avg >= 80 and avg < 90:
        return 'B'
    elif avg >= 70 and avg < 80:
        return 'C'
    elif avg >= 50 and avg < 70:
        return 'D'
    else:
        return 'F'

def solution(scores):
    answer = ''
        
    for i in range(0, len(scores)):
        cols = []

        for j in range(0, len(scores)):
            cols.append(scores[j][i])
            
        if cols.count(max(cols)) == 1:            
            if max(cols) == cols[i]:
                cols.pop(i)
                answer += checkGrade(sum(cols) / len(cols))
                continue
        
        if cols.count(min(cols)) == 1:
            if min(cols) == cols[i]:
                cols.pop(i)
                answer += checkGrade(sum(cols) / len(cols))
                continue
      
        answer += checkGrade(sum(cols) / len(cols))
          
    return answer