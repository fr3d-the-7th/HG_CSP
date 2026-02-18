
"""
number = 1000


if number < 10 and number> -10:
    print(f"{number} is a single digit number")
elif number < 100:
      print(f"{number} is a double digit number.")
else:
    print(f"{number} is a triple digit number.")
    print("...or is it?")
    new_number = number*number
    if new_number > 1000:
        print(f"Surprise number {new_number}")


print("this is the end of the code")
"""


name = input("what is your name?: ").strip().capitalize()
if name == "Arthur":
    print("Hello King Arthur")
    quest = input("what is you quest?: ").strip().capitalize
    if quest == "Holy Grail":
        print("Good luck!")
    else:
        print("That, my King, is a LAME quest!")
else:
    print(f"Hello {name}. You are not a king. :(")