/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int instant = 0;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10",
	"emoji:pixelsize=8:antialias=true:autohint=true"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#cdfffb", "#2070a1" },
	[SchemeSel] = { "#2d3a3a", "#a5bbbb" },
	[SchemeSelHighlight] = { "#2d3a3a", "#a5bbbb" },
	[SchemeNormHighlight] = { "#2d3a3a", "#a5bbbb" },
	[SchemeOut] = { "#cdfffb", "#2070a1" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
