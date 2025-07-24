box = list(map(int, input().split(" ")))
W = box[0]
H = box[1]
x = box[2]
y = box[3]
r = box[4]

if x-r < 0:
    print("No")
elif W < x+r:
    print("No")
elif y-r < 0:
    print("No")
elif H < y+r:
    print("No")
else:
    print("Yes")
