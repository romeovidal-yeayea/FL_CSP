#RV 7th fuzzbuzz

x = 1

while x <=50:
    if x % 3 == 0 and x % 5 == 0:
        print("FizzBuzz")
    elif x % 5 == 0:
        print(("Buzz!"))
    elif x % 3 == 0:
        print("Fizz")
    else:
        print(x)
    x+=1 
print("Thats all numbers through 50")