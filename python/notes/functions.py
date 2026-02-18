# HG functions notes
def hello(name):
    print(f'Hello {name}!')

def full(first, last):
    return f'{first} {last}'


print(f'Hello {full("Bob", "Jefferson")}!')
person1 = full("Lily", "Hill")
print(f'The second person is {person1}')
person= full("Jeff", "Jefferson")
hello(person)

def factorial(number):
    total = 1
    for x in range(number, 1, -1):
        total *= x
    return total

for y in range(1,11):
    print(f"The factorial of {y} is {factorial(y)}")    


num = 1 
def add():
    num = 1
    num += 1
    return num
  
print(add())