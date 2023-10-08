#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    # Ensure that both tuples have at least 2 elements, and if not, fill with 0
    a = tuple_a[:2] + (0,) * (2 - len(tuple_a))
    b = tuple_b[:2] + (0,) * (2 - len(tuple_b))
    
    # Calculate the sum of the first and second elements of both tuples
    result = (a[0] + b[0], a[1] + b[1])
    
    return result
