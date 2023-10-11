#!/usr/bin/python3
def weight_average(my_list=[]):
    if len(my_list) == 0:
        return 0
    return sum([A*B for (A, B) in my_list]) / sum([B for (A, B) in my_list])
