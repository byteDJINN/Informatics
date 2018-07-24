op = open('countin.txt', 'r')
ot = open('countout.txt', 'w')
n = int(op.readline().strip())
for i in range(1, n + 1):
	ot.write('\n')
	ot.write(str(i))
