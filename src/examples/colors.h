// colors.h

#pragma once

#include <crtxy.h>

#include <frozen/map.h>

#include <array>

namespace crtxy
{
static constexpr XY_color color(XY_color color, Uint8 a) noexcept
{
    return color | a;
}

static constexpr XY_color color(Uint8 r, Uint8 g, Uint8 b, Uint8 a) noexcept
{
    return (r << 24) | (g << 16) | (b << 8) | a;
}

static constexpr XY_color color(Uint8 r, Uint8 g, Uint8 b) noexcept
{
    return color(r, g, b, 255);
}

// https://developer.mozilla.org/en-US/docs/Web/CSS/Reference/Values/named-color

struct Colors
{
    // static constexpr XY_color black{color(0x00, 0x00, 0x00)};
    // static constexpr XY_color silver{color(0xc0, 0xc0, 0xc0)};
    // static constexpr XY_color gray{color(0x80, 0x80, 0x80)};
    // static constexpr XY_color white{color(0xff, 0xff, 0xff)};
    // static constexpr XY_color maroon{color(0x80, 0x00, 0x00)};
    // static constexpr XY_color red{color(0xff, 0x00, 0x00)};
    // static constexpr XY_color purple{color(0x80, 0x00, 0x80)};
    // static constexpr XY_color fuchsia{color(0xff, 0x00, 0xff)};
    // static constexpr XY_color green{color(0x00, 0x80, 0x00)};
    // static constexpr XY_color lime{color(0x00, 0xff, 0x00)};
    // static constexpr XY_color olive{color(0x80, 0x80, 0x00)};
    // static constexpr XY_color yellow{color(0xff, 0xff, 0x00)};
    // static constexpr XY_color navy{color(0x00, 0x00, 0x80)};
    // static constexpr XY_color blue{color(0x00, 0x00, 0xff)};
    // static constexpr XY_color teal{color(0x00, 0x80, 0x80)};
    // static constexpr XY_color aqua{color(0x00, 0xff, 0xff)};

    static constexpr XY_color aliceblue{color(0xf0, 0xf8, 0xff)};
    static constexpr XY_color antiquewhite{color(0xfa, 0xeb, 0xd7)};
    static constexpr XY_color aqua{color(0x00, 0xff, 0xff)};
    static constexpr XY_color aquamarine{color(0x7f, 0xff, 0xd4)};
    static constexpr XY_color azure{color(0xf0, 0xff, 0xff)};
    static constexpr XY_color beige{color(0xf5, 0xf5, 0xdc)};
    static constexpr XY_color bisque{color(0xff, 0xe4, 0xc4)};
    static constexpr XY_color black{color(0x00, 0x00, 0x00)};
    static constexpr XY_color blanchedalmond{color(0xff, 0xeb, 0xcd)};
    static constexpr XY_color blue{color(0x00, 0x00, 0xff)};
    static constexpr XY_color blueviolet{color(0x8a, 0x2b, 0xe2)};
    static constexpr XY_color brown{color(0xa5, 0x2a, 0x2a)};
    static constexpr XY_color burlywood{color(0xde, 0xb8, 0x87)};
    static constexpr XY_color cadetblue{color(0x5f, 0x9e, 0xa0)};
    static constexpr XY_color chartreuse{color(0x7f, 0xff, 0x00)};
    static constexpr XY_color chocolate{color(0xd2, 0x69, 0x1e)};
    static constexpr XY_color coral{color(0xff, 0x7f, 0x50)};
    static constexpr XY_color cornflowerblue{color(0x64, 0x95, 0xed)};
    static constexpr XY_color cornsilk{color(0xff, 0xf8, 0xdc)};
    static constexpr XY_color crimson{color(0xdc, 0x14, 0x3c)};
    static constexpr XY_color cyan{aqua};
    static constexpr XY_color darkblue{color(0x00, 0x00, 0x8b)};
    static constexpr XY_color darkcyan{color(0x00, 0x8b, 0x8b)};
    static constexpr XY_color darkgoldenrod{color(0xb8, 0x86, 0x0b)};
    static constexpr XY_color darkgray{color(0xa9, 0xa9, 0xa9)};
    static constexpr XY_color darkgreen{color(0x00, 0x64, 0x00)};
    static constexpr XY_color darkgrey{color(0xa9, 0xa9, 0xa9)};
    static constexpr XY_color darkkhaki{color(0xbd, 0xb7, 0x6b)};
    static constexpr XY_color darkmagenta{color(0x8b, 0x00, 0x8b)};
    static constexpr XY_color darkolivegreen{color(0x55, 0x6b, 0x2f)};
    static constexpr XY_color darkorange{color(0xff, 0x8c, 0x00)};
    static constexpr XY_color darkorchid{color(0x99, 0x32, 0xcc)};
    static constexpr XY_color darkred{color(0x8b, 0x00, 0x00)};
    static constexpr XY_color darksalmon{color(0xe9, 0x96, 0x7a)};
    static constexpr XY_color darkseagreen{color(0x8f, 0xbc, 0x8f)};
    static constexpr XY_color darkslateblue{color(0x48, 0x3d, 0x8b)};
    static constexpr XY_color darkslategray{color(0x2f, 0x4f, 0x4f)};
    static constexpr XY_color darkslategrey{color(0x2f, 0x4f, 0x4f)};
    static constexpr XY_color darkturquoise{color(0x00, 0xce, 0xd1)};
    static constexpr XY_color darkviolet{color(0x94, 0x00, 0xd3)};
    static constexpr XY_color deeppink{color(0xff, 0x14, 0x93)};
    static constexpr XY_color deepskyblue{color(0x00, 0xbf, 0xff)};
    static constexpr XY_color dimgray{color(0x69, 0x69, 0x69)};
    static constexpr XY_color dimgrey{color(0x69, 0x69, 0x69)};
    static constexpr XY_color dodgerblue{color(0x1e, 0x90, 0xff)};
    static constexpr XY_color firebrick{color(0xb2, 0x22, 0x22)};
    static constexpr XY_color floralwhite{color(0xff, 0xfa, 0xf0)};
    static constexpr XY_color forestgreen{color(0x22, 0x8b, 0x22)};
    static constexpr XY_color fuchsia{color(0xff, 0x00, 0xff)};
    static constexpr XY_color gainsboro{color(0xdc, 0xdc, 0xdc)};
    static constexpr XY_color ghostwhite{color(0xf8, 0xf8, 0xff)};
    static constexpr XY_color gold{color(0xff, 0xd7, 0x00)};
    static constexpr XY_color goldenrod{color(0xda, 0xa5, 0x20)};
    static constexpr XY_color gray{color(0x80, 0x80, 0x80)};
    static constexpr XY_color green{color(0x00, 0x80, 0x00)};
    static constexpr XY_color greenyellow{color(0xad, 0xff, 0x2f)};
    static constexpr XY_color grey{gray};
    static constexpr XY_color honeydew{color(0xf0, 0xff, 0xf0)};
    static constexpr XY_color hotpink{color(0xff, 0x69, 0xb4)};
    static constexpr XY_color indianred{color(0xcd, 0x5c, 0x5c)};
    static constexpr XY_color indigo{color(0x4b, 0x00, 0x82)};
    static constexpr XY_color ivory{color(0xff, 0xff, 0xf0)};
    static constexpr XY_color khaki{color(0xf0, 0xe6, 0x8c)};
    static constexpr XY_color lavender{color(0xe6, 0xe6, 0xfa)};
    static constexpr XY_color lavenderblush{color(0xff, 0xf0, 0xf5)};
    static constexpr XY_color lawngreen{color(0x7c, 0xfc, 0x00)};
    static constexpr XY_color lemonchiffon{color(0xff, 0xfa, 0xcd)};
    static constexpr XY_color lightblue{color(0xad, 0xd8, 0xe6)};
    static constexpr XY_color lightcoral{color(0xf0, 0x80, 0x80)};
    static constexpr XY_color lightcyan{color(0xe0, 0xff, 0xff)};
    static constexpr XY_color lightgoldenrodyellow{color(0xfa, 0xfa, 0xd2)};
    static constexpr XY_color lightgray{color(0xd3, 0xd3, 0xd3)};
    static constexpr XY_color lightgreen{color(0x90, 0xee, 0x90)};
    static constexpr XY_color lightgrey{color(0xd3, 0xd3, 0xd3)};
    static constexpr XY_color lightpink{color(0xff, 0xb6, 0xc1)};
    static constexpr XY_color lightsalmon{color(0xff, 0xa0, 0x7a)};
    static constexpr XY_color lightseagreen{color(0x20, 0xb2, 0xaa)};
    static constexpr XY_color lightskyblue{color(0x87, 0xce, 0xfa)};
    static constexpr XY_color lightslategray{color(0x77, 0x88, 0x99)};
    static constexpr XY_color lightslategrey{color(0x77, 0x88, 0x99)};
    static constexpr XY_color lightsteelblue{color(0xb0, 0xc4, 0xde)};
    static constexpr XY_color lightyellow{color(0xff, 0xff, 0xe0)};
    static constexpr XY_color lime{color(0x00, 0xff, 0x00)};
    static constexpr XY_color limegreen{color(0x32, 0xcd, 0x32)};
    static constexpr XY_color linen{color(0xfa, 0xf0, 0xe6)};
    static constexpr XY_color magenta{fuchsia};
    static constexpr XY_color maroon{color(0x80, 0x00, 0x00)};
    static constexpr XY_color mediumaquamarine{color(0x66, 0xcd, 0xaa)};
    static constexpr XY_color mediumblue{color(0x00, 0x00, 0xcd)};
    static constexpr XY_color mediumorchid{color(0xba, 0x55, 0xd3)};
    static constexpr XY_color mediumpurple{color(0x93, 0x70, 0xdb)};
    static constexpr XY_color mediumseagreen{color(0x3c, 0xb3, 0x71)};
    static constexpr XY_color mediumslateblue{color(0x7b, 0x68, 0xee)};
    static constexpr XY_color mediumspringgreen{color(0x00, 0xfa, 0x9a)};
    static constexpr XY_color mediumturquoise{color(0x48, 0xd1, 0xcc)};
    static constexpr XY_color mediumvioletred{color(0xc7, 0x15, 0x85)};
    static constexpr XY_color midnightblue{color(0x19, 0x19, 0x70)};
    static constexpr XY_color mintcream{color(0xf5, 0xff, 0xfa)};
    static constexpr XY_color mistyrose{color(0xff, 0xe4, 0xe1)};
    static constexpr XY_color moccasin{color(0xff, 0xe4, 0xb5)};
    static constexpr XY_color navajowhite{color(0xff, 0xde, 0xad)};
    static constexpr XY_color navy{color(0x00, 0x00, 0x80)};
    static constexpr XY_color oldlace{color(0xfd, 0xf5, 0xe6)};
    static constexpr XY_color olive{color(0x80, 0x80, 0x00)};
    static constexpr XY_color olivedrab{color(0x6b, 0x8e, 0x23)};
    static constexpr XY_color orange{color(0xff, 0xa5, 0x00)};
    static constexpr XY_color orangered{color(0xff, 0x45, 0x00)};
    static constexpr XY_color orchid{color(0xda, 0x70, 0xd6)};
    static constexpr XY_color palegoldenrod{color(0xee, 0xe8, 0xaa)};
    static constexpr XY_color palegreen{color(0x98, 0xfb, 0x98)};
    static constexpr XY_color paleturquoise{color(0xaf, 0xee, 0xee)};
    static constexpr XY_color palevioletred{color(0xdb, 0x70, 0x93)};
    static constexpr XY_color papayawhip{color(0xff, 0xef, 0xd5)};
    static constexpr XY_color peachpuff{color(0xff, 0xda, 0xb9)};
    static constexpr XY_color peru{color(0xcd, 0x85, 0x3f)};
    static constexpr XY_color pink{color(0xff, 0xc0, 0xcb)};
    static constexpr XY_color plum{color(0xdd, 0xa0, 0xdd)};
    static constexpr XY_color powderblue{color(0xb0, 0xe0, 0xe6)};
    static constexpr XY_color purple{color(0x80, 0x00, 0x80)};
    static constexpr XY_color rebeccapurple{color(0x66, 0x33, 0x99)};
    static constexpr XY_color red{color(0xff, 0x00, 0x00)};
    static constexpr XY_color rosybrown{color(0xbc, 0x8f, 0x8f)};
    static constexpr XY_color royalblue{color(0x41, 0x69, 0xe1)};
    static constexpr XY_color saddlebrown{color(0x8b, 0x45, 0x13)};
    static constexpr XY_color salmon{color(0xfa, 0x80, 0x72)};
    static constexpr XY_color sandybrown{color(0xf4, 0xa4, 0x60)};
    static constexpr XY_color seagreen{color(0x2e, 0x8b, 0x57)};
    static constexpr XY_color seashell{color(0xff, 0xf5, 0xee)};
    static constexpr XY_color sienna{color(0xa0, 0x52, 0x2d)};
    static constexpr XY_color silver{color(0xc0, 0xc0, 0xc0)};
    static constexpr XY_color skyblue{color(0x87, 0xce, 0xeb)};
    static constexpr XY_color slateblue{color(0x6a, 0x5a, 0xcd)};
    static constexpr XY_color slategray{color(0x70, 0x80, 0x90)};
    static constexpr XY_color slategrey{color(0x70, 0x80, 0x90)};
    static constexpr XY_color snow{color(0xff, 0xfa, 0xfa)};
    static constexpr XY_color springgreen{color(0x00, 0xff, 0x7f)};
    static constexpr XY_color steelblue{color(0x46, 0x82, 0xb4)};
    static constexpr XY_color tan{color(0xd2, 0xb4, 0x8c)};
    static constexpr XY_color teal{color(0x00, 0x80, 0x80)};
    static constexpr XY_color thistle{color(0xd8, 0xbf, 0xd8)};
    static constexpr XY_color tomato{color(0xff, 0x63, 0x47)};
    static constexpr XY_color transparent{color(0, 0, 0, 0)};
    static constexpr XY_color turquoise{color(0x40, 0xe0, 0xd0)};
    static constexpr XY_color violet{color(0xee, 0x82, 0xee)};
    static constexpr XY_color wheat{color(0xf5, 0xde, 0xb3)};
    static constexpr XY_color white{color(0xff, 0xff, 0xff)};
    static constexpr XY_color whitesmoke{color(0xf5, 0xf5, 0xf5)};
    static constexpr XY_color yellow{color(0xff, 0xff, 0x00)};
    static constexpr XY_color yellowgreen{color(0x9a, 0xcd, 0x32)};
};

static constexpr std::array colors{
    Colors::aliceblue,
    Colors::antiquewhite,
    Colors::aqua,
    Colors::aquamarine,
    Colors::azure,
    Colors::beige,
    Colors::bisque,
    Colors::black,
    Colors::blanchedalmond,
    Colors::blue,
    Colors::blueviolet,
    Colors::brown,
    Colors::burlywood,
    Colors::cadetblue,
    Colors::chartreuse,
    Colors::chocolate,
    Colors::coral,
    Colors::cornflowerblue,
    Colors::cornsilk,
    Colors::crimson,
    Colors::cyan,
    Colors::darkblue,
    Colors::darkcyan,
    Colors::darkgoldenrod,
    Colors::darkgray,
    Colors::darkgreen,
    Colors::darkgrey,
    Colors::darkkhaki,
    Colors::darkmagenta,
    Colors::darkolivegreen,
    Colors::darkorange,
    Colors::darkorchid,
    Colors::darkred,
    Colors::darksalmon,
    Colors::darkseagreen,
    Colors::darkslateblue,
    Colors::darkslategray,
    Colors::darkslategrey,
    Colors::darkturquoise,
    Colors::darkviolet,
    Colors::deeppink,
    Colors::deepskyblue,
    Colors::dimgray,
    Colors::dimgrey,
    Colors::dodgerblue,
    Colors::firebrick,
    Colors::floralwhite,
    Colors::forestgreen,
    Colors::fuchsia,
    Colors::gainsboro,
    Colors::ghostwhite,
    Colors::gold,
    Colors::goldenrod,
    Colors::gray,
    Colors::green,
    Colors::greenyellow,
    Colors::grey,
    Colors::honeydew,
    Colors::hotpink,
    Colors::indianred,
    Colors::indigo,
    Colors::ivory,
    Colors::khaki,
    Colors::lavender,
    Colors::lavenderblush,
    Colors::lawngreen,
    Colors::lemonchiffon,
    Colors::lightblue,
    Colors::lightcoral,
    Colors::lightcyan,
    Colors::lightgoldenrodyellow,
    Colors::lightgray,
    Colors::lightgreen,
    Colors::lightgrey,
    Colors::lightpink,
    Colors::lightsalmon,
    Colors::lightseagreen,
    Colors::lightskyblue,
    Colors::lightslategray,
    Colors::lightslategrey,
    Colors::lightsteelblue,
    Colors::lightyellow,
    Colors::lime,
    Colors::limegreen,
    Colors::linen,
    Colors::magenta,
    Colors::maroon,
    Colors::mediumaquamarine,
    Colors::mediumblue,
    Colors::mediumorchid,
    Colors::mediumpurple,
    Colors::mediumseagreen,
    Colors::mediumslateblue,
    Colors::mediumspringgreen,
    Colors::mediumturquoise,
    Colors::mediumvioletred,
    Colors::midnightblue,
    Colors::mintcream,
    Colors::mistyrose,
    Colors::moccasin,
    Colors::navajowhite,
    Colors::navy,
    Colors::oldlace,
    Colors::olive,
    Colors::olivedrab,
    Colors::orange,
    Colors::orangered,
    Colors::orchid,
    Colors::palegoldenrod,
    Colors::palegreen,
    Colors::paleturquoise,
    Colors::palevioletred,
    Colors::papayawhip,
    Colors::peachpuff,
    Colors::peru,
    Colors::pink,
    Colors::plum,
    Colors::powderblue,
    Colors::purple,
    Colors::rebeccapurple,
    Colors::red,
    Colors::rosybrown,
    Colors::royalblue,
    Colors::saddlebrown,
    Colors::salmon,
    Colors::sandybrown,
    Colors::seagreen,
    Colors::seashell,
    Colors::sienna,
    Colors::silver,
    Colors::skyblue,
    Colors::slateblue,
    Colors::slategray,
    Colors::slategrey,
    Colors::snow,
    Colors::springgreen,
    Colors::steelblue,
    Colors::tan,
    Colors::teal,
    Colors::thistle,
    Colors::tomato,
    Colors::transparent,
    Colors::turquoise,
    Colors::violet,
    Colors::wheat,
    Colors::white,
    Colors::whitesmoke,
    Colors::yellow,
    Colors::yellowgreen,
};

static constexpr frozen::map<std::string_view, XY_color, colors.size()>
    strToColor{
        {"aliceblue", Colors::aliceblue},
        {"antiquewhite", Colors::antiquewhite},
        {"aqua", Colors::aqua},
        {"aquamarine", Colors::aquamarine},
        {"azure", Colors::azure},
        {"beige", Colors::beige},
        {"bisque", Colors::bisque},
        {"black", Colors::black},
        {"blanchedalmond", Colors::blanchedalmond},
        {"blue", Colors::blue},
        {"blueviolet", Colors::blueviolet},
        {"brown", Colors::brown},
        {"burlywood", Colors::burlywood},
        {"cadetblue", Colors::cadetblue},
        {"chartreuse", Colors::chartreuse},
        {"chocolate", Colors::chocolate},
        {"coral", Colors::coral},
        {"cornflowerblue", Colors::cornflowerblue},
        {"cornsilk", Colors::cornsilk},
        {"crimson", Colors::crimson},
        {"cyan", Colors::cyan},
        {"darkblue", Colors::darkblue},
        {"darkcyan", Colors::darkcyan},
        {"darkgoldenrod", Colors::darkgoldenrod},
        {"darkgray", Colors::darkgray},
        {"darkgreen", Colors::darkgreen},
        {"darkgrey", Colors::darkgrey},
        {"darkkhaki", Colors::darkkhaki},
        {"darkmagenta", Colors::darkmagenta},
        {"darkolivegreen", Colors::darkolivegreen},
        {"darkorange", Colors::darkorange},
        {"darkorchid", Colors::darkorchid},
        {"darkred", Colors::darkred},
        {"darksalmon", Colors::darksalmon},
        {"darkseagreen", Colors::darkseagreen},
        {"darkslateblue", Colors::darkslateblue},
        {"darkslategray", Colors::darkslategray},
        {"darkslategrey", Colors::darkslategrey},
        {"darkturquoise", Colors::darkturquoise},
        {"darkviolet", Colors::darkviolet},
        {"deeppink", Colors::deeppink},
        {"deepskyblue", Colors::deepskyblue},
        {"dimgray", Colors::dimgray},
        {"dimgrey", Colors::dimgrey},
        {"dodgerblue", Colors::dodgerblue},
        {"firebrick", Colors::firebrick},
        {"floralwhite", Colors::floralwhite},
        {"forestgreen", Colors::forestgreen},
        {"fuchsia", Colors::fuchsia},
        {"gainsboro", Colors::gainsboro},
        {"ghostwhite", Colors::ghostwhite},
        {"gold", Colors::gold},
        {"goldenrod", Colors::goldenrod},
        {"gray", Colors::gray},
        {"green", Colors::green},
        {"greenyellow", Colors::greenyellow},
        {"grey", Colors::grey},
        {"honeydew", Colors::honeydew},
        {"hotpink", Colors::hotpink},
        {"indianred", Colors::indianred},
        {"indigo", Colors::indigo},
        {"ivory", Colors::ivory},
        {"khaki", Colors::khaki},
        {"lavender", Colors::lavender},
        {"lavenderblush", Colors::lavenderblush},
        {"lawngreen", Colors::lawngreen},
        {"lemonchiffon", Colors::lemonchiffon},
        {"lightblue", Colors::lightblue},
        {"lightcoral", Colors::lightcoral},
        {"lightcyan", Colors::lightcyan},
        {"lightgoldenrodyellow", Colors::lightgoldenrodyellow},
        {"lightgray", Colors::lightgray},
        {"lightgreen", Colors::lightgreen},
        {"lightgrey", Colors::lightgrey},
        {"lightpink", Colors::lightpink},
        {"lightsalmon", Colors::lightsalmon},
        {"lightseagreen", Colors::lightseagreen},
        {"lightskyblue", Colors::lightskyblue},
        {"lightslategray", Colors::lightslategray},
        {"lightslategrey", Colors::lightslategrey},
        {"lightsteelblue", Colors::lightsteelblue},
        {"lightyellow", Colors::lightyellow},
        {"lime", Colors::lime},
        {"limegreen", Colors::limegreen},
        {"linen", Colors::linen},
        {"magenta", Colors::magenta},
        {"maroon", Colors::maroon},
        {"mediumaquamarine", Colors::mediumaquamarine},
        {"mediumblue", Colors::mediumblue},
        {"mediumorchid", Colors::mediumorchid},
        {"mediumpurple", Colors::mediumpurple},
        {"mediumseagreen", Colors::mediumseagreen},
        {"mediumslateblue", Colors::mediumslateblue},
        {"mediumspringgreen", Colors::mediumspringgreen},
        {"mediumturquoise", Colors::mediumturquoise},
        {"mediumvioletred", Colors::mediumvioletred},
        {"midnightblue", Colors::midnightblue},
        {"mintcream", Colors::mintcream},
        {"mistyrose", Colors::mistyrose},
        {"moccasin", Colors::moccasin},
        {"navajowhite", Colors::navajowhite},
        {"navy", Colors::navy},
        {"oldlace", Colors::oldlace},
        {"olive", Colors::olive},
        {"olivedrab", Colors::olivedrab},
        {"orange", Colors::orange},
        {"orangered", Colors::orangered},
        {"orchid", Colors::orchid},
        {"palegoldenrod", Colors::palegoldenrod},
        {"palegreen", Colors::palegreen},
        {"paleturquoise", Colors::paleturquoise},
        {"palevioletred", Colors::palevioletred},
        {"papayawhip", Colors::papayawhip},
        {"peachpuff", Colors::peachpuff},
        {"peru", Colors::peru},
        {"pink", Colors::pink},
        {"plum", Colors::plum},
        {"powderblue", Colors::powderblue},
        {"purple", Colors::purple},
        {"rebeccapurple", Colors::rebeccapurple},
        {"red", Colors::red},
        {"rosybrown", Colors::rosybrown},
        {"royalblue", Colors::royalblue},
        {"saddlebrown", Colors::saddlebrown},
        {"salmon", Colors::salmon},
        {"sandybrown", Colors::sandybrown},
        {"seagreen", Colors::seagreen},
        {"seashell", Colors::seashell},
        {"sienna", Colors::sienna},
        {"silver", Colors::silver},
        {"skyblue", Colors::skyblue},
        {"slateblue", Colors::slateblue},
        {"slategray", Colors::slategray},
        {"slategrey", Colors::slategrey},
        {"snow", Colors::snow},
        {"springgreen", Colors::springgreen},
        {"steelblue", Colors::steelblue},
        {"tan", Colors::tan},
        {"teal", Colors::teal},
        {"thistle", Colors::thistle},
        {"tomato", Colors::tomato},
        {"transparent", Colors::transparent},
        {"turquoise", Colors::turquoise},
        {"violet", Colors::violet},
        {"wheat", Colors::wheat},
        {"white", Colors::white},
        {"whitesmoke", Colors::whitesmoke},
        {"yellow", Colors::yellow},
        {"yellowgreen", Colors::yellowgreen},
    };

static_assert(strToColor.size() == colors.size());
} // namespace crtxy