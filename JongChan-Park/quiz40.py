# 1259 팰린드롬수
# https://www.acmicpc.net/problem/1259

while True:
    result = "yes"
    num = input()

    if num == "0":
        break

    for i in range(0, len(num) // 2):
        if num[i] != num[(len(num) - i) - 1]:
            result = "no"
            break

    print(result)
