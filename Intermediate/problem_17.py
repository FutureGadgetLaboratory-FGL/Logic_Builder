n = int(input())
arr = [int(x) for x in input().split()]
mx = arr[0]
for i in range(1, n):
    mx = max(mx, arr[i])
print(mx)