#!/usr/bin/python3
"""My Square Module"""

class MySquare:
    """Define a square."""

    def __str__(self):
        """Override string representation for printing the square."""

        return self.print_with_position()[:-1]

    def __init__(self, side_length=0, square_position=(0, 0)):
        """Initialize the square.

        Args:
            side_length (int): The length of a side of the square.
            square_position (tuple): The position of the square (coordinates).
        """
        self.side_length = side_length
        self.square_position = square_position

    @property
    def side_length(self):
        """Property for the length of a side of the square.

        Raises:
            TypeError: If the side_length is not an integer.
            ValueError: If the side_length is less than 0.
        """
        return self.__side_length

    @side_length.setter
    def side_length(self, value):
        """Set the side length of the square.

        Args:
            value (int): The side length.

        Raises:
            TypeError: If value is not an integer.
            ValueError: If value is less than 0.
        """
        if not isinstance(value, int):
            raise TypeError('side_length must be an integer')
        if value < 0:
            raise ValueError('side_length must be >= 0')
        self.__side_length = value

    @property
    def square_position(self):
        """Property for the position of the square.

        Raises:
            TypeError: If the value is not a tuple of two positive integers.

        Returns:
            tuple: The position of the square.
        """
        return self.__square_position

    @square_position.setter
    def square_position(self, value):
        """Set the position of the square.

        Args:
            value (tuple): The position.

        Raises:
            TypeError: If value is not a tuple of two positive integers.
        Returns:
            tuple: The position of the square.
        """
        if not isinstance(value, tuple):
            raise TypeError('square_position must be a tuple of two positive integers')
        if len(value) != 2:
            raise TypeError('square_position must be a tuple of two positive integers')
        if len([i for i in value if isinstance(i, int) and i >= 0]) != 2:
            raise TypeError('square_position must be a tuple of two positive integers')
        self.__square_position = value

    def area(self):
        """Calculate the area of the square.

        Returns:
            int: The area of the square.
        """
        return self.__side_length * self.__side_length

    def print_with_position(self):
        """Returns the square with its position.

        Returns:
            str: The printed square with position.
        """
        square = ""
        if not self.side_length:
            return "\n"
        for _ in range(self.square_position[1]):
            square += "\n"
        for _ in range(self.side_length):
            for _ in range(self.square_position[0]):
                square += " "
            for _ in range(self.side_length):
                square += "#"
            square += "\n"
        return square

    def display(self):
        """Print the square with its position."""

        print(self.print_with_position(), end="")

