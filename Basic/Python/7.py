# 7. If Basic salary is input through keyboard write a program to calculate gross salary. Where,
#     da is 10% of bs.
#     ta is 12% of bs.
#     hra is 10% of bs.

bs = float(input('Enter the Base Salary amount:'))
gs = bs + (10/100)*bs + (12/100)*bs + (10/100)*bs
print('Gross Salary with Basic Salary as {} is {}.'.format(bs,gs))
