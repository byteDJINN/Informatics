file = open("snakein.txt","r")
x,y = map(int,file.readline().split())
file.close()
d = 0
moves = []

while (x,y) != (0,0):
  d = d%4
  if d == 0: 
    if x < 0:
      moves.append("L")
      x += 1
      d -= 1
    else:
      moves.append("R")
      x -= 1
      d += 1
  elif d == 1:
    if y < 0:
      moves.append("R")
      y+=1
      d+=1
    else:
      moves.append("L")
      y-=1
      d-=1
  elif d == 2:
    if x < 0:
      moves.append("R")
      x += 1
      d += 1
    else:
      moves.append("L")
      x -= 1
      d -= 1
  else: 
    if y < 0:
      moves.append("L")
      y+=1
      d-=1
    else:
      moves.append("R")
      y-=1
      d+=1
file = open("snakeout.txt","w")
file.write("".join(moves))
file.close()
