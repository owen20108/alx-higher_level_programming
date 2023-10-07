#!/usr/bin/python3
def no_c(my_string):
    rslt = ""
    for char in my_string:
        if char != 'c' and char != 'C':
            rslt += char
    return rslt
