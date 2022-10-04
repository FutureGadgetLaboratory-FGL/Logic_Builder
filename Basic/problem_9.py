# 9. Input two numbers and swap them.
# by Nitin Kumar


def swap(n1, n2):
    print('Numbers before swapping:\n n1 = {} & n1 = {}'.format(n1,n2))
    n1,n2 = n2,n1
    print('Numbers after swapping:\n n1 = {} & n1 = {}'.format(n1,n2))

n1 = int(input('Enter 1st number:'))
n2 = int(input('Enter 2nd number:'))
swap(n1, n2)
