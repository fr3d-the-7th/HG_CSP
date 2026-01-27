# HG Financial Calculator - Python

income = float(input("what is your monthly income?: $"))

home = float(input("what is your monthly housing cost?: $"))

util = float(input("what is your monthly untilities total?: $"))

food = float(input("what is your monthly grocery budget?: $"))

vroom = float(input("what is your monthly transportation cost?: $"))

extra = income - (home + util + food + vroom)


print("Since you housing cost is $" + str(home) + ", it consumes " + str(round(home/income*100)) + "% of your income.")

print("Since you utilities cost is $" + str(util) + ", it consumes " + str(round(util/income*100)) + "% of your income.")

print("Since you groceries buget is $" + str(food) + ", it consumes " + str(round(food/income*100)) + "% of your income.")

print("Since you transportation cost is $" + str(vroom) + ", it consumes " + str(round(vroom/income*100)) + "% of your income.")

print("You have $" + str(extra) + "left after all your normal expenses. It is highly recomended to put it into savings or try to pay off any debts.")

