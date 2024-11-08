#include "move_entity.h"
#include "global_defines.h"

/*
 * Params: ptr: rect to move | int dir: direction to move
 */
void moveEntity(Rectangle *rect, int *direction) {
  switch (*direction) {
    case UP:
      rect->y -= TILE_SIZE;
      return;
    case DOWN:
      rect->y += TILE_SIZE;
      return;
    case LEFT:
      rect->x -= TILE_SIZE;
      return;
    case RIGHT:
      rect->x += TILE_SIZE;
      return;
    case STILL:
      return;
  }
}

void movePoint(Vector2 *point, int *direction) {
  switch (*direction) {
    case UP:
      point->y -= TILE_SIZE;
      return;
    case DOWN:
      point->y += TILE_SIZE;
      return;
    case LEFT:
      point->x -= TILE_SIZE;
      return;
    case RIGHT:
      point->x += TILE_SIZE;
      return;
    case STILL:
      return;
  }
}
