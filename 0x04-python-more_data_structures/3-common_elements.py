#!/usr/bin/python3
def common_elements(set_1, set_2):
    c_set = []
    for it in set_1:
        for jt in set_2:
            if it == jt:
                c_set.append(it)
    return c_set
