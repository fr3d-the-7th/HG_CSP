# HG Financial Calculator - Python

income = float(input("what is your monthly income?: $"))

home = float(input("what is your monthly housing cost?: $"))

util = float(input("what is your monthly untilities total?: $"))

food = float(input("what is your monthly grocery budget?: $"))

vroom = float(input("what is your monthly transportation cost?: $"))

extra = income - (home + util + food + vroom)


print("since you hosing cost is $" + str(home) + " it consumes " + str(home/income*100) + "% of your income.")

print("since you utilities cost is $" + str(util) + " it consumes" + str(util/income*100) + "% of your income.")

print("since you groceries buget is $" + str(food) + " it consumes" + str(food/income*100) + "% of your income.")

print("since you transportation cost is $" + str(vroom) + " it consumes" + str(vroom/income*100) + "% of your income.")

print("you have $" + str(extra) + "left after all your normal expenses. It is highly recomended to put it into savings.")

