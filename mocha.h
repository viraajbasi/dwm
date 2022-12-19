/*static const char col_bg[]          = "#1E1E2E";
static const char col_gray[]        = "#6c7086";
static const char col_white[]       = "#cdd6f4";
static const char col_border[]      = "#89B4FA";
static const char *colors[][3]      = {
[SchemeNorm]      = { col_gray,    col_bg,     col_bg     },
[SchemeSel]       = { col_white,   col_bg,     col_border },
[SchemeHid]       = { col_white,   col_gray,   col_border },
};*/

static const char col_gray1[]       = "#1A1826";
static const char col_gray2[]       = "#1E1E2E";
static const char col_gray3[]       = "#302D41";
static const char col_gray4[]       = "#575268";
static const char col_mauve[]       = "#DDB6F2";
static const char col_white[]       = "#D9E0EE";

static const char *colors[][3]      = {
/*                    fg            bg          border   */
[SchemeNorm]      = { col_mauve,   col_gray1,  col_gray2  },
[SchemeSel]       = { col_gray1,   col_mauve,  col_mauve  },
/* [SchemeHid]       = { col_white,   col_gray4,  col_mauve  }, */
};
