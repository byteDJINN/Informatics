n,a,b=map(int,open('archin.txt','r').readline().split());open('archout.txt','w').write(str(max(a+b-n,1))+' '+str(min(a+b-1,n)))

'''
EXPANDED SOLUTION BELOW
-------------------
# Archery - Python 2.7.3

# n: the total number of contestants in the IAO (including you)
# a: your rank on just the first day (between 1 and n)
# b: your rank on just the second day (between 1 and n)

# Read input
input = open('archin.txt', 'r')
n, a, b = map(int, input.readline().split())

# Function that calculates best position
def best(n, a, b):
	best = a + b - n
	if best < 1:
		best = 1
	return str(best)

# Function that calculates worst position
def worst(n, a, b):
	worst = a + b - 1
	if worst > n:
		worst = n
	return str(worst)

# Write output
output = open('archout.txt', 'w')
output.write(best(n, a, b) + ' ' + worst(n, a, b))

# Close files
input.close()
output.close()
-------------------
'''
