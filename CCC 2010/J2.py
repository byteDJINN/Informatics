import time
a = int(input())
b = int(input())
c = int(input())
d = int(input())
s = int(input())

bstep = 0
nstep = 0
bfor = True
nfor = True
bprog = 0
nprog = 0

for i in range(s):
  #print(bprog,bstep,bfor)
  #print(nprog,nstep,nfor)
  #print()
  if bfor == True:
    bprog += 1
  else:
    bprog -= 1
  if nfor == True:
    nprog += 1
  else:
    nprog -= 1
  bstep += 1
  nstep += 1
  if bstep >= c and bfor == True:
    bfor = False
    bstep = 0
  elif bstep >= d and bfor == False:
    bfor = True
    bstep = 0
  if nstep >= a and nfor == True:
    nfor = False
    nstep = 0
  elif nstep >= b and nfor == False:
    nfor = True
    nstep = 0
if abs(bprog) > abs(nprog):
  print("Byron")
elif abs(nprog) > abs(bprog):
  print("Nikky")
else:
  print("Tied")
  



