#!/usr/bin/node
/**
 * Square class that inherits from the previous Square class.
 */
const PrevSquare = require('./5-square');

class Square extends PrevSquare {
  /**
   * Prints a visual representation of the square using the specified character.
   * If no character is provided, defaults to 'X'.
   * @param {string} c - The character to use for printing the square.
   */
  charPrint(c) {
    const myChar = c === undefined ? 'X' : c;
    for (let i = 0; i < this.height; i++) {
      let row = '';
      let y = 0;
      while (y < this.width) {
        row += myChar;
        y++;
      }

      console.log(row);
    }
  }
}

module.exports = Square;

