# 2869 달팽이는 올라가고 싶다
# https://www.acmicpc.net/problem/2869

import sys
import math

A, B, V = map(int, sys.stdin.readline().split())

print(math.ceil((V - A) / (A - B)) + 1)