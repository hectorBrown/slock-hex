/* user and group to drop privileges to */
static const char *user  = "hex";
static const char *group = "hex";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[BG] = "black",
	[INPUT] =  "#005577",   /* during input */
	[INPUT_ALT] = "#227799", /* during input, second color */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] = "red",         /* CapsLock on */
	[PAM] =    "black",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* size of square in px */
static const int squaresize = 50;

/* PAM service that's used for authentication */
static const char* pam_service = "login";
