#RV 7th strings Notes

#1. What makes something a string?
#a set of symbles that hold together by quotation marks

#Examples
first_name = input("What is your name:\n").strip().title()

last_name = input("what is your last name:\n").strip().title()

full_name = first_name + " " + last_name
sentence = 'The quick brown fox jumps over the lazy dog.'.strip()
print(sentence.find("jumps"))
print(sentence[20:25])
print(sentence[sentence.find("lazy"): len("lazy")+sentence.find("lazy")])

print("Welcome to my program", full_name + "!")

#sanitization and stupid proofing

#stupid proofing prevents the user to break down coding

#debuging is fixing code

#debug and bugs
#bug 1 = sintax error = a mistake in your code
#error = "this is a bug"
#how do you get them? ny mispelling, forget a variable and uppercases
#bug 2 = logic error 
#numOne = "1"
#numTwo = "2"

#print(numOne + numTwo)
 
 #run-time error
 
# num = 3
#print("my favorite number is"+num) ys