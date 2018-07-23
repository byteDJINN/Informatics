op = open('mixin.txt', 'r')
a, b = map(int, op.readline().split())
c = a / b
a = a % b

out = open('mixout.txt', 'w')
if a != 0:
	out.write(str(c) + ' ' + str(a) + '/' + str(b))
else:
	out.write(str(c))
