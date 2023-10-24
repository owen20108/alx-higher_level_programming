#!/usr/bin/python3
"""MagicClass Module"""

import math

class MagicClass:
    """A class that performs magic with circles."""

    def __init__(self, radius=0):
        """Initialize the MagicClass with a radius.

        Args:
            radius (int or float): The radius of the circle.
        """
        self.__radius = 0

        if type(radius) is not int and type(radius) is not float:
            raise TypeError('radius must be a number')

        self.__radius = radius

    def area(self):
        """Calculate and return the area of the circle.

        Returns:
            float: The area of the circle.
        """
        return self.__radius ** 2 * math.pi

    def circumference(self):
        """Calculate and return the circumference of the circle.

        Returns:
            float: The circumference of the circle.
        """
        return 2 * math.pi * self.__radius

