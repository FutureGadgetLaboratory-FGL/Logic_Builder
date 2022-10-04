# 2. Input principle amount, rate and time and calculate S.I.
# by Nitin Kumar

p = int(input('Enter principal amount:'))
r = int(input('Enter rate of interest:'))
t = int(input('Enter total time:'))

print('Simple Interest with principal amount as {}, interest as {} for {} time is {}'.format(p,r,t,(p*r*t/100)))
