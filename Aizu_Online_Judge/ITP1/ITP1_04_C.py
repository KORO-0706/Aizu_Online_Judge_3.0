i = 0
a = []
op = []
b = []

while True:
    A, OP, B = map(str, input().split(" "))
    a.append(A)
    op.append(OP)
    b.append(B)
    if op[i] == "?":
        break
    i += 1
    
for i in range(0, i):
    if op[i] == "+":
        print(int(a[i])+int(b[i]))
    elif op[i] == "-":
        print(int(a[i])-int(b[i]))
    elif op[i] == "*":
        print(int(a[i])*int(b[i]))
    elif op[i] == "/":
        print(int(int(a[i])/int(b[i])))
