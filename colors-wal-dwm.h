static const char norm_fg[] = "#96d0cf";
static const char norm_bg[] = "#141010";
static const char norm_border[] = "#699190";

static const char sel_fg[] = "#96d0cf";
static const char sel_bg[] = "#286165";
static const char sel_border[] = "#96d0cf";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
