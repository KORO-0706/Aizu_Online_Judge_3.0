box = list(map(int, input().split(" ")))
a = box[0]
b = box[1]
c = box[2]

if a < b < c:
    print("Yes")
else:
    print("No")
