# 5568 카드 놓기
# https://www.acmicpc.net/problem/5568


def dfs(depth):
    if depth == K:
        s.add("".join(map(str, li)))
        return

    for i in range(N):
        if check[i]:
            continue

        li.append(cards[i])
        check[i] = 1
        dfs(depth + 1)
        li.pop()
        check[i] = 0


N = int(input())
K = int(input())

# 여러 줄 입력을 한 번에 받아오기
cards = [int(input()) for _ in range(N)]

li, s = [], set()

check = [0] * N
dfs(0)

print(len(s))
