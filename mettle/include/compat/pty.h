#ifndef METTLE_PTY_H
#define METTLE_PTY_H

#ifdef __linux__
#include_next <pty.h>
#else
#include_next <util.h>
#endif

#endif //METTLE_PTY_H
