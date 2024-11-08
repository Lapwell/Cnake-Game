#ifndef ENTITY_DEFINES_
#define ENTITY_DEFINES_

#define ENTITY_TYPES 32
#define ENTITY_COUNT 32


// For parsing the level data from files
#define PLAYER '@'
#define HAZARD '&'
#define EXIT '^'
#define FRUIT '$'
#define POWERUP '%'
#define ENEMY '!'

#define LIST_FRUIT 0
#define LIST_POWERUP 1


#define BOUNCER_V 'B' // Used for parsing the level data. Moves vertically
#define BOUNCER_H 'b' // Like previous line, but moves horizontal.
#define BOUNCER 2 // Used in the entity list array.

#define PATROLLER_V 'P'
#define PATROLLER_H 'p'
#define PATROLLER 3

#define HUNTER_V 'H'
#define HUNTER_H 'h'
#define HUNTER 4

#endif // !ENTITY_DEFINES_
