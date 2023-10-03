#!/usr/bin/python3
def fizzbuzz():
    for fzbz in range(1, 101):
        if fzbz % 3 == 0 and fzbz % 5 == 0:
            print("FizzBuzz", end="")
        elif fzbz % 3 == 0:
            print("Fizz", end="")
        elif fzbz % 5 == 0:
            print("Buzz", end="")
        else:
            print("{:d}".format(fzbz), end="")
        print(end=" ")
