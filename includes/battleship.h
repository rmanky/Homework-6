/*==============================================================================
| Filename: battleship.h
| Programmer: Gabriel V. de a Cruz Jr.
| Class: CptS 121, Fall 2012 ; Lab Section 7
| Programming Assignment 4: Basic Game of Battleship
| Date: October 17, 2012
+------------------------------------------------------------------------------
| Description: The file contains all of the function prototypee, structs,
|              enumerated types, constanct macros and standard libraries,
|              required to run the game of Battleship.
   ==============================================================================*/

#ifndef BATTLESHIP_H
#define BATTLESHIP_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

#include "cell.h"
#include "coordinate.h"
#include "watercraft.h"
#include "random.h"

/* ENUMERATED TYPES */

typedef enum {
	FALSE, TRUE
} Boolean;

typedef enum {
	CARRIER_L    = 5,
	BATTLESHIP_L = 4,
	CRUISER_L    = 3,
	SUBMARINE_L  = 3,
	DESTROYER_L  = 2
} ShipType;

/* STRUCT TYPES */

typedef struct stats {
	int numHits;
	int numMisses;
	int totalShots;
	double hitMissRatio;
} Stats;

/* FUNCTION PROTOTYPES */

void         welcomeScreen                  (void);
void         initializeGameBoard            (Cell gameBoard[][COLS]);
void         printGameBoard                 (Cell gameBoard [][COLS], Boolean showPegs, FILE* oFile);
void         putShipOnGameBoard             (Cell gameBoard[][COLS], WaterCraft ship, Coordinate position, int direction);
void         randomlyPlaceShipsOnGameBoard  (Cell gameBoard[][COLS], WaterCraft ship[]);
void         updateGameBoard                (Cell gameBoard[][COLS], Coordinate target);
void         checkBoundsOfCardinal          (Boolean cardinals[], int bound, int direction);
void         systemMessage                  (char *message);

Boolean      checkSunkShip                  (short sunkShip[][NUM_OF_SHIPS], short player, char shipSymbol, FILE *stream);
Boolean      isValidLocation                (Cell gameBoard[][COLS], Coordinate position, int direction, int length);
Boolean      isWinner                       (Stats players[], int player);

short        checkShot                      (Cell gameBoard[][COLS], Coordinate target);

#endif
