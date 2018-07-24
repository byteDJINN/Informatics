op = open('taktakin.txt', 'r')
f = int(op.readline().strip())
m = 0
while f % 11 != 1:
	f *= 2
	m += 1

open('taktakout.txt', 'w').write(str(m) + ' ' + str(f))
