from collections import defaultdict

nums = [2,3,4,3,5,6,5,4,4,1,7,1,7,7]

b = defaultdict(int)

for c in nums:
    b[c] += 1


count=0

for c in nums:

 if b[c]==1:
  print(c)
  prev=c
  count=count+1
  break
  
for c in nums: 
    if b[c]==1:
        if c!=prev:
            print(c) 
            break