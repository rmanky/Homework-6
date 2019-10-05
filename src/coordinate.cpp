#include "coordinate.h"

/**
 * Function name : generatePosition ()
 * Date Created  : 17 October 2012
 * Usage         : generatePosition (int, int);
 * Definition    : This function generates position based on the
 *                 direction and length specified and it can't be
 *                 more than the game board size
 * Pre-condition : n/a
 * Post-condition: n/a
 */
Coordinate generatePosition (int direction, int length) {
	Coordinate position;

	if (direction == HORIZONTAL) {
		position.row    = getRandomNumber (0, ROWS);
		position.column = getRandomNumber (0, COLS - length);
	} else {                                                                                                                                                                                 /* VERTICAL */
		position.row    = getRandomNumber (0, ROWS - length);
		position.column = getRandomNumber (0, COLS);
	}

	return position;
}

/**
 * Function name : getTarget ()
 * Date Created  : 17 October 2012
 * Usage         : getTarget ();
 * Definition    : This function reads a row and column values from
 *                 the user
 * Pre-condition : n/a
 * Post-condition: n/a
 */

Coordinate getTarget (void) {
	Coordinate target;

	fflush (stdin);

	printf ("> Enter Target (ex. > 3 4):\n");
	printf ("> ");
	scanf ("%d %d", &target.row, &target.column);

	return target;
}
