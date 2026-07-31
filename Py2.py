price1 = 314159265.35897932384626
price2 = -173205.080756887729
price3 = 141421.35623730950
#format specifier = {value:format specf}
print(f"Pi ={price1:+,.20f}")
print(f"root 3 ={price2:+,.1f}")
print(f"root 2 ={price3:+,.6f}")
print(f"root 2 ={price3:10}")
print(f"root 3 ={price2:030}")
print(f"root 2 ={price3:25}")
print(f"root 2 ={price3:^25.2f}") #center→^
print(f"root 3 ={price2:^25.4f}")
for i in range(10,0,-1):
  print(i, end="")
print()
#same reversed loop can be run by↓ 
for i in reversed(range(1,11)):
  print(i,end="-")