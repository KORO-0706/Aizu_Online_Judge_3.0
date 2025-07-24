box = list(input())

for i in range(0, len(box)):
    if box[i].islower():
        box[i] = box[i].upper()
    elif box[i].isupper():
        box[i] = box[i].lower()

for i in range(0, len(box)):
    print(str(box[i]), end="")
print()