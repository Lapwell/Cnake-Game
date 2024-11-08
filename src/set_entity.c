#include "set_entity.h"
#include "arr_length.h"
#include "global_defines.h"
#include "global_structs.h"
#include "entity_defines.h"
#include "char_to_int_entity.h"
#include <stdlib.h>
#include <time.h>

#define MAX_RANDOM 100

void setEntity(char char_type, int row, int col,
               Entity entity_list[ENTITY_TYPES][ENTITY_COUNT])
{
  int int_type = char_to_int_entity(char_type);
  int length = entityArrLength(entity_list[int_type]);
  srand(time(NULL));
  int rand_num = rand() % MAX_RANDOM;
  int dir = LEFT;
  if (char_type >= 'A' && char_type <= 'Z') {
    if (rand_num > 50) {
      dir = UP;
    } else {
      dir = DOWN;
    }
  } else if (char_type >= 'a' && char_type <= 'z') {
    if (rand_num > 50) {
      dir = LEFT;
    } else {
      dir = RIGHT;
    }
  }
  switch (int_type) {
    case BOUNCER:
      entity_list[int_type][length] = (Entity) {
        char_type,
        YELLOW,
        dir,
        {col * TILE_SIZE, row * TILE_SIZE, TILE_SIZE, TILE_SIZE}
      };
      break;
    case PATROLLER:
      entity_list[int_type][length] = (Entity) {
        char_type,
        YELLOW,
        dir,
        {col * TILE_SIZE, row * TILE_SIZE, TILE_SIZE, TILE_SIZE}
      };
      break;
  }
}

