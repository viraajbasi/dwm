static const char norm_fg[] = "#779fc8";
static const char norm_bg[] = "#040205";
static const char norm_border[] = "#536f8c";

static const char sel_fg[] = "#779fc8";
static const char sel_bg[] = "#6F1654";
static const char sel_border[] = "#779fc8";

static const char urg_fg[] = "#779fc8";
static const char urg_bg[] = "#571655";
static const char urg_border[] = "#571655";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
