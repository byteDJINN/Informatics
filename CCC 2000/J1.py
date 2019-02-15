a, b = input().split()
a = int(a)
b = int(b)
print("Sun Mon Tue Wed Thr Fri Sat")
print(" " * (a*3 -1 + a-1),end="")
count = a
c = 1
for p in range(b):
    if count == 8:
        print("\n",end="")
        if c <= 9:
            print("  ",end="")
        else:
            print(" ",end="")
        count = 1
    print(c, end="")
    if c <= 8 and count!=7 and c!=b:
        print(" " * 3,end="")
    elif count !=7 and c!=b:
        print(" " * 2,end="")
    c += 1
    count += 1
print("\n",end="")
