#!/usr/bin/node

let counter = 0;

/**
 * Logs the given item along with a counter value.
 * Increments the counter after each log.
 * @param {*} item - The item to be logged.
 */
exports.logMe = function count(item) {
  console.log(`${counter}: ${item}`);
  counter += 1;
};

