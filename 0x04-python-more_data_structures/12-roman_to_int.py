#!/usr/bin/python3
def roman_to_int(roman_string):
    if roman_string and type(roman_string) is str:
        dictnry = dict(I=1, V=5, X=10, L=50, C=100, D=500, M=1000)
        val = 0
        for var, x in zip(roman_string, roman_string[1:]):
            if dictnry[var] < dictnry[x]:
                val -= dictnry[var]
            else:
                val += dictnry[var]
        val += dictnry[roman_string[-1]]
        return val
    else:
        return 0
