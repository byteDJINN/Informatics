op = open('dishin.txt', 'r')
n = []
c = int(op.readline().strip())
for c in range(0, c):
	n.append(int(op.readline()))

ma = max(n)
mn = min(n)
to = 0
for i in n:
	to += i
to = to/len(n)

open('dishout.txt', 'w').write(str(mn) + ' ' + str(ma) + ' ' + str(to))
