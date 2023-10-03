#!/usr/bin/python3
for lttr in range(ord("a"), ord("z") + 1):
    if chr(lttr) != "q" and chr(lttr) != "e":
        print("{:s}".format(chr(lttr)), end="")
