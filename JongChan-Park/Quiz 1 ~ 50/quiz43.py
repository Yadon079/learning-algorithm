# 1764 듣보잡
# https://www.acmicpc.net/problem/1764

N, M = list(map(int, input().split(" ")))
hear = [input() for _ in range(N)]
see = [input() for _ in range(M)]

result = sorted(set(hear) & set(see))

print(len(result))

for overlap in result:
    print(overlap)
