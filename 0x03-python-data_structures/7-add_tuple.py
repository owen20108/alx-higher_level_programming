#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
   
    a = tuple_a[:2] + (0, 0)
    b = tuple_b[:2] + (0, 0)
    
    
    rslt_tple = (a[0] + b[0], a[1] + b[1])
    
    return rslt_tple
