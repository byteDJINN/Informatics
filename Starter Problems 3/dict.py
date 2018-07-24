op = open('dictin.txt', 'r')

'''
d is the number of entries in the biliilingsdgl language
w is the number of translations
'''
d, w = map(int, op.readline().split())
dic = {}

for i in range(d):
	a, b = op.readline().split()
	dic[a] = b

ot = open('dictout.txt', 'w')
for i in range(w):
	n = op.readline().strip()
	if n in dic.keys():
		ot.write(dic[n] + '\n')
	else:
		ot.write('C?\n')
