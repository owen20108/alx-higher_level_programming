#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    multiplylst = []
    for i in range(len(my_list)):
        if my_list[i] % 2 == 0:
            multiplylst.append(True)
        else:
            multiplylst.append(False)

    return (multiplylst)
