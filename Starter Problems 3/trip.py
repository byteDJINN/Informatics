op = open('tripin.txt', 'r')
n = int(op.readline())
data = []
for i in range(n):
	data.append(int(op.readline().strip()))


triples_pos = []

# Counting the triples and saving their positions in the list triples
for no in range(len(data)):
	if data[no] % 3 == 0:
		triples_pos.append(str(no + 1))

# Outputing answer
ot = open('tripout.txt', 'w')
if len(triples_pos) > 0:
	ot.write(str(len(triples_pos)) + '\n')
	for i in triples_pos:
		ot.write(str(i) + ' ')
else:
	ot.write('Nothing here!')
