import math
file = open("probein.txt","r")
r,c,rp,cp,rf,cf = map(int,file.readline().split())
q = int(file.readline())
answer = []
diagonal = abs(rp - rf) == abs(cp - cf)
for j in range(q):
  i = list(map(int,file.readline().split()))
  if diagonal: # Diagonal
    dp = math.sqrt(abs(rp - i[0])**2 + abs(cp - i[1])**2)
    df = math.sqrt(abs(rf - i[0])**2 + abs(cf - i[1])**2)
    if dp < df:
      answer.append("WATER")
    elif dp > df:
      answer.append("LAVA")
    else:
      answer.append("MOUNTAINS")
  else:
    if abs(rp - i[0]) + abs(cp - i[1]) < abs(rf - i[0]) + abs(cf - i[1]):
      answer.append("WATER")
    elif abs(rp - i[0]) + abs(cp - i[1]) > abs(rf - i[0]) + abs(cf - i[1]):
      answer.append("LAVA")
    else:
      answer.append("MOUNTAINS")

file.close()

file = open("probeout.txt","w")
for i in answer:
  file.write(i+"\n")

file.close()
      



