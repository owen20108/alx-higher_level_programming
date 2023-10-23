#!/usr/bin/python3


def safe_print_list_integers(my_list=[], x=0):
    printed_count = 0
    for index in range(x):
        try:
            print("{:d}".format(my_list[index]), end="")
            printed_count += 1
        except (ValueError, TypeError):
            index += 1
            continue
    print("")
    return printed_count

