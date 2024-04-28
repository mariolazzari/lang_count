import time

count = 1000000000
start = time.time()

while count >0:
  count = count - 1 
  break

end = time.time()

print (end - start)