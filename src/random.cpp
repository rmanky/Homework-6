#include "random.h"

/**
 * Function name : getRandomNumber ()
 * Date Created  : 17 October 2012
 * Usage         : getRandomNumber (int, int);
 * Definition    : This function returns a random number between and
 *                 including the lowest to the highest number
 * Pre-condition : n/a
 * Post-condition: n/a
 */
int getRandomNumber (int lowest, int highest) {
	if (lowest == 0)
		return rand () % ++highest;

	if (lowest > 0)
		return rand () % ++highest + lowest;
	return 0;
}
