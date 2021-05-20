#define DIALOG_INFO 0

new NO_PARAMS[4] = "";

// HOLDING(keys)
#define HOLDING(%0) \
	((newkeys & (%0)) == (%0))

// PRESSED(keys)
#define PRESSED(%0) \
	(((newkeys & (%0)) == (%0)) && ((oldkeys & (%0)) != (%0)))

// RELEASED(keys)
#define RELEASED(%0) \
	(((newkeys & (%0)) != (%0)) && ((oldkeys & (%0)) == (%0)))

//
enum
{
	ADMIN_LEVEL_NONE,
	ADMIN_LEVEL_MODERATOR,
	ADMIN_LEVEL_ADMINISTRATOR,
	ADMIN_LEVEL_DEVELOPER,
	MAX_ADMIN_LEVELS
};
//