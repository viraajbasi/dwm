static const char norm_fg[] = "#d5cfc7";
static const char norm_bg[] = "#0f0f0e";
static const char norm_border[] = "#95908b";

static const char sel_fg[] = "#d5cfc7";
static const char sel_bg[] = "#D39C4F";
static const char sel_border[] = "#d5cfc7";
static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
