#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    printed_count = 0
    for index in range(x):
        try:
            print("{}".format(my_list[index]), end="")
            printed_count += 1
        except IndexError:
            break
    print()
    return printed_count

