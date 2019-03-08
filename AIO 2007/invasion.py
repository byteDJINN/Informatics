lines = open('invin.txt', 'r').readlines()

r, c = lines[0].split()
r, c = int(r), int(c)

grid = lines[1:]

bordering = {}

for i in range(r):
	for j in range(c-1):
		cell_1 = grid[i][j]
		cell_2 = grid[i][j+1]
		if cell_1 != cell_2:
			if cell_1 not in bordering:
				bordering[cell_1] = [cell_2]
			if cell_2 not in bordering:
				bordering[cell_2] = [cell_1]
			if cell_1 not in bordering[cell_2]:
				bordering[cell_2].append(cell_1)
			if cell_2 not in bordering[cell_1]:
				bordering[cell_1].append(cell_2)

for j in range(c):
	for i in range(r-1):
		cell_1 = grid[i][j]
		cell_2 = grid[i+1][j]
		if cell_1 != cell_2:
			if cell_1 not in bordering:
				bordering[cell_1] = [cell_2]
			if cell_2 not in bordering:
				bordering[cell_2] = [cell_1]
			if cell_1 not in bordering[cell_2]:
				bordering[cell_2].append(cell_1)
			if cell_2 not in bordering[cell_1]:
				bordering[cell_1].append(cell_2)

answer = 0
for key in bordering:
	answer = max(answer, len(bordering[key]))

outfile = open('invout.txt', 'w')
outfile.write(str(answer))
outfile.close()
