box = list(map(int, input().split(" ")))
a = int(box[0])
b = int(box[1])

if a == b:
    print("a == b")
elif a < b:
    print("a < b")
elif a > b:
    print("a > b")
