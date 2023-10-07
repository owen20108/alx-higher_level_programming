#!/usr/bin/python3
def new_in_list(my_list, idx, element):
    duplct = my_list[:]
    if idx >= 0 and idx < len(duplct):
        duplct[idx] = element
    return duplct
