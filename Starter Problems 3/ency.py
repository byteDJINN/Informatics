op = open('encyin.txt', 'r')
n, q = op.readline().split()
n = int(n)
q = int(q)
dic = {}

for i in range(1, n + 1):
	dic[str(i)]=(op.readline().strip())


ot = open('encyout.txt', 'w')
for i in range(0, q):
	ot.write(dic[op.readline().strip()])
	ot.write('\n')
