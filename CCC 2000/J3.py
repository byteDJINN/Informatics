quarters = int(input())
no1 = int(input())
no2=int(input())
no3=int(input())
slot = 0
turns = 0
while quarters != 0:
    turns += 1
    slot += 1
    if slot == 4:
        slot = 1
    if slot ==1:
        no1 += 1
        quarters -= 1
        if no1 == 35:
            no1=0
            quarters +=30
    if slot ==2:
        no2 += 1
        quarters -= 1
        if no2 == 100:
            no2=0
            quarters +=60
    if slot ==3:
        no3 += 1
        quarters -= 1
        if no3 == 10:
            no3=0
            quarters +=9

print('Martha plays %s times before going broke.' % str(turns))
