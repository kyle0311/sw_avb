
#define RGB_CMD_ENABLE_BLUE_SPIN 	0x0
#define RGB_CMD_ENABLE_GREEN_SPIN 	0x1
#define RGB_CMD_ENABLE_RED_SPIN  	0x2

#define RGB_CMD_UPDATE_PATTERNS		0x3

#define RGB_CMD_DISABLE_BLUE_SPIN	0x4
#define RGB_CMD_DISABLE_RED_SPIN	0x5
#define RGB_CMD_DISABLE_GREEN_SPIN      0x6

#define RGB_CMD_GET_BLUE_PATTERN	0x7
#define RGB_CMD_GET_RED_PATTERN		0x8
#define RGB_CMD_GET_GREEN_PATTERN	0x9
 
#define RGB_CMD_KILL			0xa

#define RED  0
#define BLUE 1
#define GREEN 2

void rgb_server(chanend c_rgb);
