/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;             /* -b  option; if 0, dmenu appears at bottom     */
static const char *prompt = NULL;  /* -p  option; prompt to the left of input field */

/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"monospace:pixelsize=15:antialias=true:hintstyle=hintmedium"
};

static const char *colors[SchemeLast][2] = {
	/*              foreground  background */
	[SchemeNorm] = { "#966bab", "#15191e" },
	[SchemeSel]  = { "#966bab", "#2c2c38" },
	[SchemeOut]  = { "#966bab", "#15191e" },
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;

/* -h option; minimum height of a menu line */
static unsigned int lineheight = 32;
static unsigned int min_lineheight = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";


/* vim: filetype=c
 */
