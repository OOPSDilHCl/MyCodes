#Time 
import time 
inp = int(input("Enter time in seconds."))
for x in range(0,inp+1):
  sec = x%60
  minute = int(x/60)%60
  hr = int(x/3600) 
  print(f"{hr:02}:{minute:02}:{sec:02}")
  time.sleep(1)
print("Time's up")
  