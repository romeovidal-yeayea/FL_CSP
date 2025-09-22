#RV 7th loops notes

foods = ["chocolate", "pasta", "brownies", "cookies", "garlic bread", "fajitas"]
#what is a alaoop
# loops repete the code inside them for specific amount of time

#For loop 
for food in foods:
    #print(f"{food} is my favorite food!")
    print("Hi!")

for x in range (1,21):
    print(x)

#while loops
"""i= 0 
while True
   print(i)
   i+= 1"""
#Infinite loop

#correct while loop
i = 1

while i < 20:
    print(i)
    i+= 1

x = 1

while x < 21:
    if x % 2 == 0:
     print(f"{x} is an even number.")
else:
    print(f"{x} is am odd number.")
    x+= 1

import random
d = 1
end = random.randint(1,20)

"""while d != end:
    print("Duck")
    d += 1

print("Goose")"""

while True:
    if d == end:
        print("Goose")
        break
    else:
        print("Duck")
        d += 1
#breaks information in three different parts
#iterator
#one loop of the same code
#1how many times loops has run
#2.set stopping poimt
#3.increase iteratorh

