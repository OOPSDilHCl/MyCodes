name=input("enter your name: ")
print(len(name))
print(name.find('o'))
print(name.rfind('e'))
print(name.capitalize())
print(name.upper())
print(name.lower())
print(name.count("a"))
print(name.replace("a","o"))
print(input("Enter a string").isalpha())
print(input("Enter a string").isdigit())
print(help(str))
#indexing→[start(if no input then taken as 0 and if negative then start from last=-1 second last=-2 ) : end(if no input taken as n-1) : steps].
credit_num=input("Enter your credit card number")
print(credit_num[0])
print(credit_num[:4])#or [0:4]
print(credit_num[4:])
print(credit_num[::3])#jumps 3 steps
print(credit_num[-1])#last element
last_digits=credit_num[-4:]
print(last_digits)
#reverse a string 
print(credit_num[::-1])