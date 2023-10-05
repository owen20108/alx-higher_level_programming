#!/usr/bin/python3
def magic_calculation(a, b):
    from magic_calculation_102 import add, sub
    if a < b:
        numbr = add(a, b)
        for x in range(4, 6):
            numbr = add(numbr, x)
        return numbr
    else:
        return sub(a, b)
