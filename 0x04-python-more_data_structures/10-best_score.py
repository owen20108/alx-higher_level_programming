#!/usr/bin/python3
def best_score(a_dictionary):
    if a_dictionary:
        new_ky = ""
        tmprry = 0
        for ky, valu in a_dictionary.items():
            if valu > tmprry:
                tmprry = valu
                new_ky = ky
        return new_ky
