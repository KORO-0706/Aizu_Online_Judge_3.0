H = []
W = []
n = 0

while True:
    h, w = map(int, input().split())
    H.append(h)
    W.append(w)
    if H[n] == 0 and W[n] == 0:
        break
    n += 1

for k in range(0, n):
    for i in range(0, int(H[k])):
        for j in range(0, int(W[k])):
            if i == 0 or i == int(H[k])-1 or j == 0 or j == int(W[k]-1):
                print("#", end="")
            else:
                print(".", end="")
        print()
    print()
