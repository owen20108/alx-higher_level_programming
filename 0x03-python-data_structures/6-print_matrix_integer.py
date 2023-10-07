#!/usr/bin/python3
def print_matrix_integer(matrix=[[]]):
    for var in matrix:
        print(' '.join("{:d}".format(var2) for var2 in var))
