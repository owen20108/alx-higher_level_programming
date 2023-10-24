#!/usr/bin/python3
"""A Python module defining a MagicClass."""

import math

class MagicClass:
    """A class for performing magic with circles."""

    def __init__(self, circle_radius=0):
        """Initialize the MagicClass.

        Args:
            circle_radius (float): The radius of the circle.
        """
        self.__circle_radius = 0

        if type(circle_radius) is not int and type(circle_radius) is not float:
            raise TypeError('circle_radius must be a number')

        self.__circle_radius = circle_radius

    def area(self):
        """Calculate the area of the circle.

        Returns:
            float: The area of the circle.
        """
        return self.__circle_radius ** 2 * math.pi

    def circumference(self):
        """Calculate the circumference of the circle.

        Returns:
            float: The circumference of the circle.
        """
        return 2 * math.pi * self.__circle_radius

