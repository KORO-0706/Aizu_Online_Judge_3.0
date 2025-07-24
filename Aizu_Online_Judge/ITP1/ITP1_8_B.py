
while True:
    box = list(input())

    if int(box[0]) == 0:
        break

    sum = 0
    for i in range(0, len(box)):
        sum += int(box[i])

    print(sum)