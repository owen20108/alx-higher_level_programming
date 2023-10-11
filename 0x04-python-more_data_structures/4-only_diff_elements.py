#!/usr/bin/python3
def only_diff_elements(set_1, set_2):
    all_set = []
    for it in set_1:
        all_set.append(it)
    for jt in set_2:
        if jt in all_set:
            all_set.remove(jt)
        else:
            all_set.append(jt)
    return all_set
