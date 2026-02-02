import random #
# HG Loops Notes

"""

start = 0 

while start <= 20:
    print(start)
    start += 3.45
print("The loop is over")

goose = random.randint(1,25)
count = 1

while count != goose:
    print("Duck")
    count += 1
print("GOOSE!")

number = random.randint(1,20)

while True:
    guess = int(input("tell me a number between 1 and 20: "))
    if guess == number:
        print(f"You won! The number was {number}!")
        break
    elif guess <number:
        print("Guess higher")
    else:
        print("Guess lower")"""
# HG lists

number = [1,5466,354643655436,54643,67,453636,43]
names = ["Alex", "Hope", "Bill", "Bob"]

print(len(names))
names[0] = "Eric"
names.append("Joe") #adds to end of list
index = names.index("Bob")
names.pop(3) #removes item from list based on index (or the end if no index given)
print(names)
#for loops

for name in names: 
    print(f"Hello {name}")
for number in numbers:
    print(f"{number}- 10 = {number-10}")
