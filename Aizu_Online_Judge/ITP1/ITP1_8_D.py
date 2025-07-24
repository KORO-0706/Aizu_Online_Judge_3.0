
data = input()
line = input()

for k in range(0, len(data)):
    i = k
    box = ""
    limit = i
    count = i#文字列カウント用
    while i < limit+len(line):
        while count >= len(data):# 文字列をループさせる
            count -= len(data)
        box += data[count]
        i += 1
        count += 1
    if box == line:
        print("Yes")
        break
    if k == len(data)-1:
        print("No")
