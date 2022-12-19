static const char norm_fg[] = "#9dc9d8";
static const char norm_bg[] = "#0f1212";
static const char norm_border[] = "#6d8c97";

static const char sel_fg[] = "#9dc9d8";
static const char sel_bg[] = "#0F6694";
static const char sel_border[] = "#9dc9d8";
static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
