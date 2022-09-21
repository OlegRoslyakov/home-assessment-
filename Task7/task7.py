
print("Task 1")
array = [i for i in range (-9, 10)]
print (array)

for i in range (-9, 10, 1):array [i] = "Python"
print (array)

N =  (input("Enter what you want to see "))
for i in range (-9, 10, 1):array [i] = N
print (array)


print("Task 2.1")
list = [-1,2,8]
def getAboveZero(list):
    for i in range(0,10):
     if  (list[i] > 0):
      print(list[i])
      break
    else: 
      print ("-1") 

getAboveZero(list)

print("Task 2.2")
def getAboveNum(list):
    elem = int(input("Enter number: "))
    for i in range(0,10):
     if  (list[i] > elem):
      print(list[i])
      break
    else: 
      print ("-1") 
     
getAboveNum(list)

from arracrobatics import getAboveNumfun

print("Task 3")
getAboveNumfun(list)


value = int(input("Enter number: "))
v = [int(j) for j in str(value)]
print(v)