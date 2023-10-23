#!/usr/bin/python3
def
safe_print_list (my_list =[], x = 0):
var = 0 
 for va
in range (x): 
try: 
print ("{}".format (my_list[va]), end = "") 
 var += 1 
 except IndexError:
break 
print ("") 
    return
    (var)
