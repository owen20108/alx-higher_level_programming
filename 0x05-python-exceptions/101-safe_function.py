#!/usr/bin/python3
import sys


def safe_function(fct, *args):
    try:
        return fct(*args)
    except Exception as ea:
        print("Exception: {}".format(ea), file=sys.stderr)
        return None
