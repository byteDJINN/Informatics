file = open("ladyin.txt","r")
n = int(file.readline())
lads = []
for i in range(n):
  lads.append(int(file.readline()))
file.close()
file = open("ladyout.txt","w")
file.write(str(max(lads) - min(lads) + 1))
file.close()
