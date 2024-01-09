#!/usr/bin/node

/**
 * Reverses the elements of a given list.
 * @param {Array} list - The array to be reversed.
 * @returns {Array} - A new array with the elements in reverse order.
 */
exports.esrever = function (list) {
  const reversedList = [];
  for (let i = list.length - 1; i >= 0; i--) {
    reversedList.push(list[i]);
  }

  return reversedList;
};

