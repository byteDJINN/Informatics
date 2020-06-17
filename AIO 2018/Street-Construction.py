po_file = open("streetin.txt", "r")
op_file = open("streetout.txt", "w")
po_open = po_file.read()

po_numbers = po_open.split()

k = int(po_numbers[1])
n = int(po_numbers[0])
house_number = n - k
if house_number % (k+1) == 0:
    min_block_size = house_number // (k+1)
else:
    min_block_size = house_number // (k+1) + 1
op_file.write(str(min_block_size))
