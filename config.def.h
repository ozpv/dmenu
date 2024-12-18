/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int centered = 1;
static int min_width = 500;
static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int draw_input = 1;                  /* -noi option; if 0, the input will not be drawn by default */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#cdd6f4", "#1e1e2e" },
	[SchemeSel] = { "#cdd6f4", "#313244" },
	[SchemeOut] = { "#cdd6f4", "#74c7ec" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 22;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
