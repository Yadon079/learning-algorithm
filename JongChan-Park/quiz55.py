# 10162 전자레인지
# https://www.acmicpc.net/problem/10162

N = int(input())
timers = [300, 60, 10]
result = list()

for timer in timers:
    click = N // timer

    N -= click * timer

    result.append(click)

if N > 0:
    print(-1)
else:
    print(result[0], result[1], result[2])
