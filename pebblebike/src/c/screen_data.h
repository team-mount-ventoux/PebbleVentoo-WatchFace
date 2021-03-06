#ifndef SCREEN_DATA_H
#define SCREEN_DATA_H

#ifdef PBL_ROUND
  #define PAGE_DATA_TOP_H SCREEN_H / 2 - TOPBAR_HEIGHT + 10
  #define PAGE_DATA_TOP_OFFSET_Y TOPBAR_HEIGHT
  #define PAGE_DATA_MAIN_H 76
#else
  #define PAGE_DATA_TOP_H SCREEN_H / 2 - TOPBAR_HEIGHT + 20
  #define PAGE_DATA_TOP_OFFSET_Y TOPBAR_HEIGHT
  #define PAGE_DATA_MAIN_H 76
#endif

#define PAGE_DATA_MIDDLE_DATA_H PAGE_SCREEN_CENTER_H + PBL_IF_ROUND_ELSE(0, 8)
#define PAGE_DATA_TOP_DATA_H PAGE_DATA_MIDDLE_DATA_H - PAGE_DATA_MAIN_H / 2
#define PAGE_DATA_BOTTOM_DATA_H PAGE_DATA_MIDDLE_DATA_H + PAGE_DATA_MAIN_H / 2

#define NAVIGATION_COMPASS_RADIUS (SCREEN_W/2-5)
#define NAVIGATION_COMPASS_PADDING 3
#define NAVIGATION_COMPASS_CENTER_X SCREEN_W/2
#define NAVIGATION_COMPASS_CENTER_Y (PBL_IF_ROUND_ELSE(PAGE_SCREEN_CENTER_H, (SCREEN_H-TOPBAR_HEIGHT)/2-6))
#define NAVIGATION_COMPASS_CENTER GPoint(NAVIGATION_COMPASS_CENTER_X, NAVIGATION_COMPASS_CENTER_Y)
#define NAVIGATION_COMPASS_RECT GRect(NAVIGATION_COMPASS_CENTER_X-NAVIGATION_COMPASS_RADIUS, NAVIGATION_COMPASS_CENTER_Y-NAVIGATION_COMPASS_RADIUS, 2 * NAVIGATION_COMPASS_RADIUS, 2 * NAVIGATION_COMPASS_RADIUS)

void line_layer_update_callback(Layer *me, GContext* ctx);
void screen_data_deinit();

extern Layer *line_layer;

#endif // SCREEN_DATA_H
