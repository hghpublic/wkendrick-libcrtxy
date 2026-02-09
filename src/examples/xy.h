//

#pragma once

#include <crtxy.h>


namespace crtxy
{
#if 0
void XY_default_options(XY_options* opts);
XY_bool XY_load_options(XY_options* opts);
XY_bool XY_load_options_from_file(char* fname, XY_options* opts,
                                  XY_bool ignore_unknowns);
int XY_parse_options(int* argc, char* argv[], XY_options* opts);
XY_bool XY_parse_envvars(XY_options* opts);

XY_bool XY_init(XY_options* opts, XY_fixed canvasw, XY_fixed canvash);
void XY_quit(void);

XY_err XY_errcode(void);
const char* XY_errstr(void);
void XY_print_options(FILE* fi, XY_options opts);


XY_bitmap* XY_load_bitmap(char* filename);
XY_bitmap* XY_load_bitmap_from_buffer(unsigned char* buffer, int size);
void XY_free_bitmap(XY_bitmap* bitmap);

XY_bool XY_set_background(XY_color color, XY_bitmap* bitmap, XY_fixed x,
                          XY_fixed y, int posflags, int scaling);
void XY_enable_background(XY_bool enable);

XY_color XY_setcolor(Uint8 r, Uint8 g, Uint8 b, Uint8 a);
void XY_getcolor(XY_color c, Uint8* r, Uint8* g, Uint8* b, Uint8* a);

void XY_start_frame(int fps);
int XY_end_frame(XY_bool throttle);

XY_lines* XY_new_lines(void);
XY_lines* XY_duplicate_lines(XY_lines* lines);
XY_bool XY_free_lines(XY_lines* lines);
XY_bool XY_start_lines(XY_lines* lines);
XY_bool XY_add_line(XY_lines* lines, XY_fixed x1, XY_fixed y1, XY_fixed x2,
                    XY_fixed y2, XY_color color, XY_fixed thickness);
XY_bool XY_translate_lines(XY_lines* lines, XY_fixed x, XY_fixed y);
XY_bool XY_scale_lines(XY_lines* lines, XY_fixed xscale, XY_fixed yscale);
XY_bool XY_rotate_lines(XY_lines* lines, int angle);
void XY_draw_line(XY_fixed x1, XY_fixed y1, XY_fixed x2, XY_fixed y2,
                  XY_color color, XY_fixed thickness);
XY_bool XY_draw_lines(XY_lines* lines);
void XY_draw_one_line(XY_line line);
void XY_draw_point(XY_fixed x, XY_fixed y, XY_color color, XY_fixed thickness);

#define XY_mult(a, b)                                                          \
    (((a) >> XY_FIXED_SHIFT_HALF) * ((b) >> XY_FIXED_SHIFT_HALF))
#define XY_qdiv(a, b)                                                          \
    (((a) / ((b) >> XY_FIXED_SHIFT_HALF)) << XY_FIXED_SHIFT_HALF)
#define XY_div(a, b)                                                           \
    (((b) >> XY_FIXED_SHIFT_HALF) == 0 ? XY_FIXED_NAN : XY_qdiv((a), (b)))
#define XY_FIXED_DIV_ZERO ((1 << XY_FIXED_SHIFT_HALF) - 1)
#define XY_fpart(a) ((a) & (XY_FIXED_ONE - 1))
#define XY_rfpart(a) (XY_FIXED_ONE - XY_fpart(a))
#define XY_ipart(a) ((a) - XY_fpart(a))
#define XY_round(a) (XY_ipart((a) + (1 << (XY_FIXED_SHIFT - 1))))
XY_fixed XY_cos(int degrees);
#define XY_sin(degrees) (XY_cos(90 - (degrees)))
XY_fixed XY_sqrt(XY_fixed i);

XY_fixed XY_screenx_to_canvasx(int sx);
XY_fixed XY_screeny_to_canvasy(int sy);
void XY_screen_to_canvas(int sx, int sy, XY_fixed* cx, XY_fixed* cy);
XY_fixed XY_canvasx_to_screenx(int cx);
XY_fixed XY_canvasy_to_screeny(int cy);
void XY_canvas_to_screen(XY_fixed cx, XY_fixed cy, int* sx, int* sy);

int XY_get_screenw(void);
int XY_get_screenh(void);

XY_bool XY_lines_intersect(XY_line line1, XY_line line2, XY_fixed* intersect_x,
                           XY_fixed* intersect_y, XY_intersection* result);
XY_bool XY_line_groups_intersect(XY_lines* lines1, XY_lines* lines2);
#endif
} // namespace crtxy