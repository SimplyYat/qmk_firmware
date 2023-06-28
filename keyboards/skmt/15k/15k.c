#include "15k.h"

#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 1, 0 },
  { 3, 2 }
}, {
  // LED Index to Physical Position
  // Using range { 0..224, 0..64 }
  { 224,  0 }, { 0,  0 }, { 0, 64 }, { 224, 64 }
}, {
  // LED Index to Flag
  // https://docs.qmk.fm/#/feature_rgb_matrix?id=flags
  4, 4, 4, 4
} };
#endif

void keyboard_post_init_kb(void) {
    rgb_matrix_mode(RGB_MATRIX_RAINBOW_PINWHEELS);
    //rgb_matrix_set_color_all(RGB_AZURE);
}
