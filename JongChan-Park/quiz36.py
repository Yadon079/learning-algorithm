# 1966 프린터 큐
# https://www.acmicpc.net/problem/1966

T = int(input())

for _ in range(1, T + 1):
    n, m = list(map(int, input().split(" ")))
    documents = list(map(int, input().split(" ")))

    index = [0 for _ in range(n)]
    index[m] = 1

    cnt = 0

    while True:
        if documents[0] == max(documents):  # 첫 번째 요소가 documents의 최대값이라면
            cnt += 1

            if index[0] != 1:
                documents.pop(0)
                index.pop(0)
            else:
                print(cnt)
                break

        else:
            documents.append(documents.pop(0))
            index.append(index.pop(0))
