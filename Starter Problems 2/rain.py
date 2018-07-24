op = open('rainin.txt', 'r')
n, c = map(int, op.readline().split())
total = 0
count = 0
for i in range(n):
	total += int(op.readline())
	count += 1
	if total >= c:
		ot = open('rainout.txt', 'w')
		ot.write(str(count))
		break
