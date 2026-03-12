static const Block blocks[] = {
    /*Icon*/ /*Command*/ /*Update Interval*/ /*Update Signal*/
    {"󰍛 ", "free -h | awk '/^Mem/ { print $3 }' | sed s/i//g", 30, 0},

    {" ", "sensors | grep CPU | awk '{print $2}'", 30, 0},

    {"", "/home/jamie/.local/src/someblocks/scripts/battery", 60, 0},

    {"", "date '+%b %d %I:%M%p'", 60, 0},
};

// sets delimiter between status commands. NULL character ('\0') means no
// delimiter.
static char delim[] = "    ";
static unsigned int delimLen = 10;
