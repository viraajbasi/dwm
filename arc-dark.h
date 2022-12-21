#define ACCENT "#3b84de"
#define GRAY1  "#2c2f3a"
#define GRAY2  "#404552"
#define GRAY3  "#4b5162"
#define GRAY4  "#7c818c"
#define TEXT   "#D3DAE3"


static char normfgcolor[]                = GRAY4;
static char normbgcolor[]                = GRAY1;
static char normbordercolor[]            = GRAY2;

static char selfgcolor[]                 = TEXT;
static char selbgcolor[]                 = ACCENT;
static char selbordercolor[]             = ACCENT;

static const char *colors[][3]      = {
/*                    fg            bg          border   */
    [SchemeNorm]      = { normfgcolor,   normbgcolor,  normbordercolor  },
    [SchemeSel]       = { selfgcolor,   selbgcolor,  selbordercolor  },
};
