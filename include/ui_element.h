#ifndef UI_ELEMENT_
#define UI_ELEMENT_

#include "raylib.h"

// Struct for storing UI element related info.
typedef struct UI_Element {
  Rectangle rect; // The text bg rect
  Color bg_colour; // Rect colour
  char *text; // Text to display
  Color text_colour; // Colour of text
  float text_size; // Width of text
  float font_size; //Font size
  Vector2 text_pos; // Text position
} UI_Element;

UI_Element define_element(char *text, float font_size, Vector2 pos);

void drawUIElement(UI_Element *element, bool hide_rect);

#endif // !
