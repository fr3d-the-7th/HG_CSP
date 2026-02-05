# HG Financial Calculator - Python
def enter(p):
    return float(input(f"what is your monthly {p}?: $"))

def calcu(p):
    print(f"Since you {p} is $" + str(p) + ", it consumes " + str(round(p/income*100)) + "% of your income.")
   

income = enter("income")
home = enter("housing bill")
util = enter("utilities bill")
food = enter("grocery bill")
vroom = enter("transportation cost")
save = enter("amount you put into savings")
extra = income - (home + util + food + vroom)

 
calcu(home)


