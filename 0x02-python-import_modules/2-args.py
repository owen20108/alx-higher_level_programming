#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    numbr = len(argv) - 1
    print("{:d} {:s}{:s}".format(numbr,
                                 "argument" if numbr <= 2 and numbr == 1
                                 else "arguments",
                                 "." if numbr == 0 else ":"))
    for z, x in enumerate(argv):
        if z > 0:
            print("{}: {}".format(z, x))
