input = open('sitin.txt', 'r')
a, b = map(int, input.readline().split())
c = int(input.readline())

e = 0
if a * b <= c:
	e += a * b
	c -= a * b
else:
	e += c
	c = 0

out = open('sitout.txt', 'w')
out.write(str(e) + ' ' + str(c))
