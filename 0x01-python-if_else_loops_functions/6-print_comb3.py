#!/usr/bin/python3
for combo in range(0, 8):
    for combo2 in range(combo + 1, 10):
        print("{:d}{:d}".format(combo, combo2), end=", ")
print("{:d}{:d}".format(combo + 1, combo2))
