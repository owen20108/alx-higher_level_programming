#!/usr/bin/python3
def uppercase(str):
    for upr in str:
        if ord("a") <= ord(upr) <= ord("z"):
            upr = chr(ord(upr) + (ord("A") - ord("a")))
        print("{:s}".format(upr), end="")
    print("")
