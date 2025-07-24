
alph = [0]*26
box = []

while True:
    try:
        str1 = input()
        str2 = list(str1.lower())
        for i in range(0, len(str2)):
            box.append(str2[i])

    except EOFError:
        break

for i in range(0, len(box)):
        if 'a' <= box[i] <= 'z':
            alph[ord(box[i])-ord('a')] += 1

for i in range(0, 26):
    print(str(chr(i+ord('a')))+" : "+str(alph[i]))