#!/usr/bin/python3
from sys import stderr

def safe_function(function, *args):
    try:
        return function(*args)
    except Exception as error:
        stderr.write("Exception: {}\n".format(error))
        return None

