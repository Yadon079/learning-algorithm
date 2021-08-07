# 2476 주사위 게임
# https://www.acmicpc.net/problem/2476

import sys

N = int(sys.stdin.readline())
rewards = []

for i in range(N):
    nums = list(map(int, sys.stdin.readline().split()))

    if nums.count(nums[0]) == 3:
        rewards.append(10000 + (nums[0] * 1000))
    elif nums.count(nums[0]) == 2:
        rewards.append(1000 + (nums[0] * 100))
    elif nums.count(nums[1]) == 2:
        rewards.append(1000 + (nums[1] * 100))
    else:
        rewards.append(max(nums) * 100)

print(max(rewards))
