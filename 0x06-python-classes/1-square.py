#!/usr/bin/python3
"""MyShape Class

Defining a class for a 2D shape

"""

class MyShape:
    """A 2D shape

    Methods for manipulating it

    """

    def __init__(self, size):
        """Make a shape of a given size

        Size of the new shape is private

        Args:
            size (int): the length of the sides

        """

        self.__size = size

