n =int(input())
a = list(map(int, input().split()))

def minFigure(box):
    min = box[0]
    for i in range(0, len(a)):
        if min > box[i]:
            min = box[i]
    return min

def maxFigure(box):
    max = box[0]
    for i in range(0, len(a)):
        if max < box[i]:
            max = box[i]
    return max

def sumFigure(box):
    sum = 0
    for i in range(0, len(a)):
        sum += box[i]
    return sum

min = minFigure(a)
max = maxFigure(a)
sum = sumFigure(a)

print(str(min)+" "+str(max)+" "+str(sum))