box = list(map(int, input().split(" ")))
a = box[0]
b = box[1]

print(str(int(a/b))+" "+str(int(a%b))+" "+str(round(float(a/b), 5))+"\n")
