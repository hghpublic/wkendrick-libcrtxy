// lines.cpp

#include "colors.h"

#include <crtxy.h>

namespace
{
// process options

static const auto process_options = [](int argc, char* argv[]) {
    XY_options opts{};
    XY_default_options(&opts);

    printf("\nDefault options:\n");
    XY_print_options(stdout, opts);

    int ret = XY_load_options(&opts);
    if (!ret)
    {
        exit(EXIT_FAILURE);
    }

    printf("\nAfter loading options:\n");
    XY_print_options(stdout, opts);

    ret = XY_parse_envvars(&opts);
    if (!ret)
    {
        exit(EXIT_FAILURE);
    }

    printf("\nAfter parsing environment variables:\n");
    XY_print_options(stdout, opts);

    ret = XY_parse_options(&argc, argv, &opts);
    if (ret != 0)
    {
        fprintf(stderr, "Error setting libcrtxy options: %s\n", XY_errstr());
        fprintf(stderr, "Failed on %s\n", argv[ret]);
        exit(EXIT_FAILURE);
    }

    printf("\nAfter parsing options:\n");
    XY_print_options(stdout, opts);

    if (!XY_init(&opts, 32 << XY_FIXED_SHIFT, 24 << XY_FIXED_SHIFT))
    {
        fprintf(stderr, "Error initializing libcrtxy: %s\n", XY_errstr());
        XY_print_options(stderr, opts);
        exit(EXIT_FAILURE);
    }
};

// draw n-gon


static const auto draw = [](int n) {
    static constexpr int MAX_I{16};
    static constexpr int MAX_A{360};
    for (int i = 0; i < MAX_I; i++)
    {
        for (int a = 0; a < MAX_A; a += MAX_A / n)
        {
            const int an{a + MAX_A / n};
            
            static constexpr int shiftX{16 << XY_FIXED_SHIFT};
            static constexpr int shiftY{12 << XY_FIXED_SHIFT};
            
            static const auto x = [](int i, int a) {
                return ((XY_cos(a) * i) + shiftX);
            };
            static const auto y = [](int i, int a) {
                return ((-XY_sin(a) * i) + shiftY);
            };
            
            const int x1 = x(i, a);
            const int y1 = y(i, a);

            const int x2 = x(i, an);
            const int y2 = y(i, an);

            const XY_color color =
                XY_setcolor((a * 255) / MAX_A, 0xff,
                            255 - ((a * 255) / (2 * MAX_A)), i * 16);

            XY_draw_line(x1, y1, x2, y2, color, XY_THIN);
        }
    }
};

// handle events
static const auto handle_events = [](XY_bool& done, XY_bool& showbkgd) {
    SDL_Event event{};

    while (SDL_PollEvent(&event))
    {
        if (event.type == SDL_QUIT)
        {
            done = XY_TRUE;
        }
        else if (event.type == SDL_KEYDOWN)
        {
            if (event.key.keysym.sym == SDLK_ESCAPE)
            {
                done = XY_TRUE;
            }
            else if (event.key.keysym.sym == SDLK_b)
            {
                showbkgd = (showbkgd ? XY_FALSE : XY_TRUE);
                XY_enable_background(showbkgd);
            }
        }
    }
};

} // namespace

int main(int argc, char* argv[])
{
    process_options(argc, argv);

    // clear screen

    using crtxy::Colors;
    XY_set_background(Colors::black, nullptr, 0, 0, XY_POS_LEFT | XY_POS_TOP,
                      XY_SCALE_STRETCH);

    int n = 3;
    XY_bool done = XY_FALSE;
    XY_bool showbkgd = XY_TRUE;

    while (!done)
    {
        XY_start_frame(10);

        draw(n);

        XY_end_frame(XY_TRUE);

        handle_events(done, showbkgd);

        n++;
        if (n >= 30)
        {
            n = 3;
        }
    }

    XY_quit();

    return EXIT_SUCCESS;
}
