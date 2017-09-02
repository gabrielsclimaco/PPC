import math

y = x = 7
sum = 0

while x != 1:
    p = math.log10(x)
    sum = 0

    t = x
    for i in range (p, -1, -1):
        sum += (t / (10 ** i)) ** 2
        t = t - ((t / (10 ** i)) * (10 ** i))

    x = sum
    if (x == y):
        break

