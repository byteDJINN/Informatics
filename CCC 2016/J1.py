a = [input() for x in range(6)]
if a.count('W') in [5,6]:
  print(1)
elif a.count('W') in [3,4]:
  print(2)
elif a.count('W') in [1,2]:
  print(3)
else:
  print(-1)

