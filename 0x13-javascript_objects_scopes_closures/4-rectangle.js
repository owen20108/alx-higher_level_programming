#!/usr/bin/node
/**
 * Represents a rectangle class with width and height attributes.
 * Validates parameters during instantiation.
 */
class Rectangle {
  /**
   * Constructor for the Rectangle class.
   * @param {number} w - The width of the rectangle (must be a positive number).
   * @param {number} h - The height of the rectangle (must be a positive number).
   */
  constructor(w, h) {
    // Validate parameters
    if (typeof w === 'number' && w > 0 && typeof h === 'number' && h > 0) {
      this.width = w;
      this.height = h;
    }
  }

  /**
   * Prints a visual representation of the rectangle using 'X' characters.
   */
  print() {
    for (let i = 0; i < this.height; i++) {
      let row = '';
      let y = 0;
      while (y < this.width) {
        row += 'X';
        y++;
      }

      console.log(row);
    }
  }

  /**
   * Rotates the rectangle by swapping its width and height.
   */
  rotate() {
    let temp = 0;
    temp = this.width;
    this.width = this.height;
    this.height = temp;
  }

  /**
   * Doubles the dimensions (width and height) of the rectangle.
   */
  double() {
    this.width *= 2;
    this.height *= 2;
  }
}

module.exports = Rectangle;

