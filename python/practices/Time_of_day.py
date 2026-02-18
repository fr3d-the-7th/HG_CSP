# HG Time of Day

tm = float(input("please enter the curent time in military and using a decimal instead of a colon (ie. 1:30 PM = 13.3): "))

if tm < 12 and tm >= 5:
    print("Top of the morning to ya!")

elif tm <= 17 and tm >= 12:
    print("Good afternoon!")

elif tm >= 17 and tm <= 24:
    print("Evening!")

elif tm >= 0 and tm < 5:
    print("Go to bed or I will force you to, you sleep deprived zombie!")
    
else: 
    print("You either don't know how time works, or have decided to be a jerk. Fix. It.")

