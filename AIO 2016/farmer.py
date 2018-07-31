lines = open("farmin.txt","r").readlines()
n = int(lines[0])
fences = lines[1].split()
fences = [int(i) for i in fences]

bob = [fences[0]]
for i in range(1,n):
  bob.append(bob[-1]+fences[i])

fences.reverse()
anna = [fences[0]]
for i in range(1,n):
  anna.append(anna[-1]+fences[i])

count = 0
a = 0
b = 0
while a<n and b<n:
  if bob[a] == anna[b]:
    count += 1
    a += 1
    b += 1
  elif bob[a] < anna[b]:
    a += 1
  else:
    b += 1
file = open("farmout.txt",'w')
file.write(str(n-count))
file.close()

