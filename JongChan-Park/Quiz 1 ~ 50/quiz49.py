# 2609 최대공약수와 최소공배수
# https://www.acmicpc.net/problem/2609

def gcp(N, M):
    while M > 0:
        temp = N % M
        N = M
        M = temp
        
    return N
  
def lcm(N, M, gcp):
    return (N * M) // gcp

N, M = map(int, input().split())
  
gcpNum = gcp(N, M)

print(gcpNum)
print(lcm(N, M, gcpNum))