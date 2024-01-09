#!/usr/bin/node

/**
 * Counts the number of occurrences of a specified element in a given list.
 * @param {Array} list - The array in which occurrences are counted.
 * @param {*} searchElement - The element to count occurrences of.
 * @returns {number} - The number of occurrences of the searchElement in the list.
 */
exports.nbOccurences = function (list, searchElement) {
  let count = 0;

  for (let i = 0; i < list.length; i++) {
    count = (list[i] === searchElement ? count + 1 : count);
  }

  return count;
};

