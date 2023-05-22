/* user and group to drop privileges to */
static const char *user  = "hex";
static const char *group = "hex";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#242424",     /* after initialization */
	[BG] = "black", /* pretty sure this isn't ever displayed */
	[INPUT] =  "#689D6A",   /* during input */
	[INPUT_ALT] = "#8EC07C", /* during input, second color */
	[FAILED] = "#CC241D",   /* wrong password */
	[CAPS] = "#D79921",         /* CapsLock on */
	[PAM] =    "#928374",   /* waiting for PAM */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* size of square in px */
static const int squaresize = 200;

/* PAM service that's used for authentication */
static const char* pam_service = "login";

/* Patch: auto-timeout */
/* should [command] be run only once? */
static const int runonce = 0;
/* length of time (seconds) until [command] is executed */
static const int timeoffset = 30;
/* command to be run after [timeoffset] seconds has passed */
static const char *command = "/usr/bin/xset dpms force off";

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=30;
/*Enable Pixelation*/
/*#define PIXELATION*/
/*Set pixelation radius*/
static const int pixelSize=0;
