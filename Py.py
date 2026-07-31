#comments are written using # 
#new to pyhton
language=input("I like java whicj lang you like")
n=float(input("I get good marks in college what was your gpa"))
print(f"So your favourite lang is {language} and gpa {n} thats great")
print(type(n))
num=6.7
print(type(num))
n1=int(num)
print(type(n1))
num=input("Input a number")
print(type(num))
#exponent of any number can be operator is ** .
m=round(3.1882)
print(m)
m=round(3.18826778888,3)
print(m)
m=abs(-3.1882)
print(m)
m=pow(3.2,5)
print(m)
m=3.2**5
print(m)
m=max(3.627,78,8,90)
print(m)
m=min(6,8)
print(m)
import math#import math for pi, e, floor, ceil,sqrt,cbrt.
print(math.ceil(6.8))
print(math.ceil(6))
print(math.floor(6.2))
print(math.floor(6.9))
print(math.sqrt(6.2))
print(math.cbrt(6.2))
print(math.pi)
print(math.e)
a=2
b=9
c=10
if a==b or not(a<b<c and b>=a):
  print("Hello World")
else:
  print("Hello2")
  #and,or,not are logical operators just like &&,||,!.
  #else if is written elif
age=int(input("Enter your age: "))
status="Adult" if age>=18 else "Child"
print(status)
print("Good" if a<b else "Bad")
temp=29
print("Warm" if temp>28 else "Cool")