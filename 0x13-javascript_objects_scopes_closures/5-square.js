#!/usr/bin/node
/**
 * Square class that inherits from the Rectangle class.
 */
const Rectangle = require('./4-rectangle');

class Square extends Rectangle {
  /**
   * Constructor for the Square class.
   * @param {number} size - The size of the square (must be a positive number).
   */
  constructor(size) {
    // Call the constructor of the parent class (Rectangle) with equal width and height
    super(size, size);
  }
}

module.exports = Square;

