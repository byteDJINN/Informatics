a = int(input())
b = int(input())
swap = {"9":"6", "6":"9", "1":"1", "8":"8", "0":"0", "2":"?", "3":"?", "4":"?", "5":"?", "7":"?"}
n = 0
for i in range(a, b+1):
    y = list(str(i))
    for x in range(len(y)):
        if y[x] in swap.keys():
            y[x] = swap[y[x]]
    if "".join(y)[::-1] == str(i):
        n += 1
print(n)
