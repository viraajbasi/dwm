static const char norm_fg[] = "#afbbc1";
static const char norm_bg[] = "#070C0D";
static const char norm_border[] = "#7a8287";

static const char sel_fg[] = "#afbbc1";
static const char sel_bg[] = "#556369";
static const char sel_border[] = "#afbbc1";
static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
