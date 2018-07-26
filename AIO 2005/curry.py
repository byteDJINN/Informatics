file = open("curryin.txt", "r")
c, r, v = file.readline().split()
c, r, v = map(int, [c, r, v])
cr = 0
cv = 0
rv = 0
def check(c, r, v):
    if max(c, r, v) != sum([c, r, v]):
        return True
    else:
        return False
def eat(c, r, v, cr, cv, rv):
    if min(c, r, v) == c:
        c += 1
        rv += 1
    elif min(c, r, v) == r:
        r += 1
        cv += 1
    else:
        v += 1
        cr += 1
    c -= 1
    r -= 1
    v -= 1
    return c, r, v, cr, cv, rv
while check(c, r, v):
    c, r, v, cr, cv, rv = eat(c, r, v, cr, cv, rv)

cr, cv, rv = map(str, [cr, cv, rv])
out = open("curryout.txt", "w")
out.write(rv + " " + cv + " " + cr)
out.close()
file.close()
