#include "wall_collide.h"
#include "global_defines.h"
#include "raylib.h"

bool wallCollide(Rectangle rect, Tile level[ROWS][COLS]) {
  int row = rect.y / ROWS;
  int col = rect.x / COLS;
  if (CheckCollisionRecs(rect, level[row][col].rect) && level[row][col].type == WALL) {
    return true;
  }
  return false;
}

