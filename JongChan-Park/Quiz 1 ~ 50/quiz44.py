# 10773, 제로
# https://www.acmicpc.net/problem/10773

from sys import stdin

nums = []

for num in map(int, stdin):
    if num:
        nums.append(num)
    else:
        nums.pop()

print(sum(nums))
