# 4153 직각삼각형 
# https://www.acmicpc.net/problem/4153

while True:
    nums = list(map(int, input().split(" ")))

    if sum(nums) == 0:
        break

    heru = max(nums)
    nums.remove(heru)

    if (nums[0] ** 2 + nums[1] ** 2) == heru ** 2:
        print("right")
    else:
        print("wrong")
