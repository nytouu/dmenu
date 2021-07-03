/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static const unsigned int alpha = 0x70;
static const unsigned int border_width = 0;

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Roboto Mono:style=Medium:size=12"
};
static const char *prompt      = "run:";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#c9c9c9", "#1a1b26" },
	[SchemeSel] = { "#1a1b26", "#7aa2f7" },
	[SchemeOut] = { "#000000", "#414868" },
	[SchemeSelHighlight] = { "#ffffff", "#7aa2f7" },
    [SchemeNormHighlight] = { "#7aa2f7", "#1a1b26" },
	[SchemeHp] = { "#bbbbbb", "#333333" }
};

static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, OPAQUE },
	[SchemeOut] = { OPAQUE, alpha },
	[SchemeSelHighlight] = { OPAQUE, alpha },
    [SchemeNormHighlight] = { OPAQUE, alpha },
	[SchemeHp] = { OPAQUE, alpha }
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 24;
static unsigned int min_lineheight = 24;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
