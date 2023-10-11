#!/usr/bin/python3
def search_replace(my_list, search, replace):
    return [replace if itemz == search else itemz for itemz in my_list]
