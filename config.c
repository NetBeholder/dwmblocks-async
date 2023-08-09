#include "config.h"

#include "block.h"
#include "util.h"

Block blocks[] = {
//    {"./statusbar/sb-mail",    600,  1 },
//    {"./statusbar/sb-music",   0,    2 },
    {"$XDG_BIN_HOME/statusbar/sb-disk",    1800, 3 },
    {"$XDG_BIN_HOME/statusbar/sb-memory",  10,   4 },
//    {./"/statusbar/sb-loadavg", 5,    5 },
//    {"./statusbar/sb-mic",     0,    6 },
//    {"./statusbar/sb-record",  0,    7 },
//    {"sb-updates", 3600,    6 },
    {"sb-volume",  1,    7 },
    {"sb-battery", 5,    8 },
    {"sb-kbdlayout", 1,    9 },
    {"sb-date",    1,    10},
};

const unsigned short blockCount = LEN(blocks);
