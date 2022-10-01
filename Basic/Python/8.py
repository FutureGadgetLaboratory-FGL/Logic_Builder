# 8. Input temperature in Fahrenheit and convert into Celsius.

f = int(input('Enter tmperature in Fahrenheit:'))
c = (f-32)*5/9
print('Temperature in °C when temperature in °F is {} is {}.'.format(f,c))
