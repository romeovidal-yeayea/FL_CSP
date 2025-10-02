# RV 7th Function Notes

#What a function is
#print()
#input()
#def welcome():
    #name = input("What is your name?")
    #print(f"Hello, {name}!")

    #print("This is not in my function")
   # welcome()
#welcome()
#welcome()
#welcome()
#welcome()

def add(number, number_two):
    number += number_two
    print(number)

num_one = 12
num_two = 4

#add(80)
##add(80)
#add(80)
#add(80)
# a peramater is a variable that only exist in a function and the argument is the value you gicve to the peramater

import random

def roll(mod):
    return random.randint(2, 18) + mod

strenght = roll(0)
dextarity = roll(1)
intellegence = roll(1)
charisma = roll(0)
print("Here are your stats!")
print(f"Strenght: {strenght}\nDex: {dextarity}\nInt: {intellegence}\nChar: {charisma}")

