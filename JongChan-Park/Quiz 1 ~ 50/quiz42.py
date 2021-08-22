# 1181 단어 정렬
# https://www.acmicpc.net/problem/1181

N = int(input())
str = [input() for _ in range(N)]
str_list = []

for i in range(N):
  str_list.append((str[i], len(str[i])))

str_list = list(set(str_list))
str_list.sort(key = lambda str: (str[1], str[0]))

for str in str_list:
  print(str[0])