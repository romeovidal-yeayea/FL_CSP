#RV 7th conditional notes

#What puts something inside of the “if” statement?
# If you are asking a question and want a specific statement for a specific answer
    
#What do if statements do?
# Says if code is true or false


#homework_done = input("Is your homework done: ").strip().capitalize()

#if homework_done == "yes":
#    print("Yes you can go!")


#What are boolean statements? 
# They show if it's true or false. Always true or false

#What do else statements do?

#else:
#    print("Then go do your homework!")

#What kind of statement do you use if you have more than 2 needed outcomes?
#the if homework_done = "Yes"
# and else :
#       yes you can go

grade = 110

if grade >= 90:
   if grade > 100:
    print("You cheated that isn't possible!")
   else:
    print(f"You have {grade}% that is an A!")
elif grade > 80:
    print(f"You have {grade}% that is a B!")
elif grade >= 70:
    print(f"You have a {grade}% that is a C!")
else:
    print(f"You have a {grade}% that is not an A :(")

#logical operators, and, or not

name = input("What is your name?") 

if name == "miss M":
    print("You are the teacher!")
elif name == "Tia" or name == "Ashley":
    print("You are the TA")
else:
    print(f"Hello {name}, you are a student")
    if grade >= 70:
       print("And you are passing the class")

#What do each of the different symbols mean in conditionals?
#< less than
#> greater than
#<= less than or equal to
#>= greater than or equal to
#== are they equal
#!not
#What are the 3 logical operators?
#and, or not
#What are logical operator for
#so you can meet all the operation needs 
#What does a nested conditional statement do?
#condition that only happens inside another one 