#!/usr/bin/python3
def uniq_add(my_list=[]):
    copylist = []
    for it in my_list:
        if it not in copylist:
            copylist.append(it)
    reslt = 0
    for it in copylist:
        reslt = reslt + it
    return reslt
