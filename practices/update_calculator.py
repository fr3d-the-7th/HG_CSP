# HG Financial Calculator - Python
def enter(p):
    return float(input(f"what is your monthly {p}?: $"))

income = enter("income")
home = enter("housing bill")
util = enter("utilities bill")
food = enter("grocery bill")
vroom = enter("transportation cost")
save = enter("amount you put into savings")
extra = income - (home + util + food + vroom)

def calcu(y, p):
   print("Since your "+ y + " cost is $" + str(home) + ", it consumes " + p + "% of your income.")

calcu("housing", str(round(home/income*100)))
calcu("utilities", str(round(util/income*100)))
calcu("groceries", str(round(food/income*100)))
calcu("transportation", str(round(vroom/income*100)))
calcu("savings", str(round(save/income*100)))

print("You have $" + str(extra) + " left after all your normal expenses. It is highly recomended to try to pay off any debts or enjoy life with it.")
