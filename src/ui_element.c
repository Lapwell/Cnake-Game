#include "raylib.h"
#include "ui_element.h"

// Used to create a UI element object easily. Calcs sizes and placements.
UI_Element define_element(char *text, float font_size, Vector2 pos) {

  // NOTE: Font size is always a multiple of 10.
  // NOTE: Font spacing is divided by 10 to get the font spacing.
  Vector2 text_size = MeasureTextEx(GetFontDefault(), text, font_size, font_size / 10); // Get height and width of the text.
                                                                           //
  Vector2 rect_size = {text_size.x + (text_size.x / 2), text_size.y + (text_size.y / 2)}; // Yoink the width and height of the text, add a little area for borders
                                                  //
  // NOTE: .rect=bg text box, .tex_pos=position of the text. Placed to the center or .rect
  UI_Element item = {.rect={pos.x - (rect_size.x / 2), pos.y, rect_size.x, rect_size.y},
                     .bg_colour=GRAY, .text=text, .text_colour=BLACK, .font_size=font_size,
                     .text_pos=(Vector2){pos.x - (text_size.x / 2), pos.y + (text_size.y / 4)}};
  return item;
}

// Only call when already drawing
void drawUIElement(UI_Element *element, bool hide_rect) {
  Color bg_colour = element->bg_colour;
  if (hide_rect) {
    bg_colour = element->bg_colour;
  }
  DrawRectangleRec(element->rect, bg_colour);
  DrawText(element->text, element->text_pos.x, element->text_pos.y,
           element->font_size, element->text_colour);
}
