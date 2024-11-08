#include "global_structs.h"
#include "arr_length.h"

int entityArrLength(Entity arr[]) {
  int count = 0;
  while (arr[count].type != '\0') {
    count++;
  }
  return count;
}

