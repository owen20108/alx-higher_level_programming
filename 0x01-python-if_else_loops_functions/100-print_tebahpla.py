#!/usr/bin/python3
for num in reversed(range(ord("a"), ord("z") + 1)):
    if num % 2 != 0:
        num = num - 32
    print("{:c}".format(num), end="")
