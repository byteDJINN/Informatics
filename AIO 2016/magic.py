line = open("magicin.txt","r").readline().split()
a,b,c = int(line[0]),int(line[1]),int(line[2])

grid = [[0,0,0] for x in range(3)]
grid[0][0] = a
grid[0][1] = b
grid[1][0] = c
if a+b > a+c:
  grid[0][2] = 2
  grid[2][0] = b-c+2
elif a+b<a+c:
  grid[0][2] = c-b+2
  grid[2][0] = 2
else:
  grid[0][2] = 2
  grid[2][0] = 2
grid[1][2] = b
grid[2][1] = c
grid[2][2] = a
grid[1][1] = sum(grid[0])-b-c


file = open("magicout.txt","w")
for line in grid:
  file.write(' '.join(map(str,line))+"\n")
file.close()
