MAX_HUMANS = 100000
MAX_WIDTH = 1000000
n = None
w = None
p = [None for x in range(MAX_HUMANS)]
op = open('alienin.txt', 'r')
ot = open('alienout.txt', 'w')
input  = op.readline().strip()
n, w = [int(x) for x in input.split()]
for i in range(0, n):
	p[i] = int(op.readline().strip())
answer = 0
first = 0
last = 0
for last in range(n):
	while p[last]-p[first] >=w:
		first += 1
	if answer < last - first + 1:
		answer = last-first+1
ot.write(str(answer))
op.close()
ot.close()
