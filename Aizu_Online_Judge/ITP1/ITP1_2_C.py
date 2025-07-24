box = list(map(int, input().split(" ")))

for i in range(0, len(box)):
    for j in range(i, len(box)):
        if box[i] > box[j]:
            fig = box[i]
            box[i] = box[j]
            box[j] = fig

for i in range(0, len(box)):
    print(box[i], end ="")
    if i != len(box)-1:
        print(" ", end ="")
    else:
        print()
