n = int(input())
a = list(map(int, input().split()))

for i in range(0, int(n/2)):
    k = a[i]
    a[i] = a[n-1-i]
    a[n-1-i] = k

for i in range(0, n):
    print(a[i], end="")
    print("" if i == n-1 else " ", end="")

print()