# 10. Input 5 digit numbers and calculate sum of its digits.
# by Nitin Kumar

sum=0
n1 = int(input('Enter a 5-digit number:'))
while n1:
    i = n1%10
    n1=int(n1/10)
    sum+=i
print(sum)


//By Parth Thaker


def getSum(n):
     
    strr = str(n)
    list_of_number = list(map(int, strr.strip()))
    return sum(list_of_number)
   
n = 12345
print(getSum(n))
