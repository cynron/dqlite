#ifndef LOGGING_H_
#define LOGGING_H_

#include "../../include/dqlite.h"

struct logger
{
	void *data;
	void (*emit)(void *data, int level, const char *fmt, va_list args);
};

/**
 * Emit a log message with a certain level.
 */
#define debugf(L, FORMAT, ...) \
	L->emit(L->data, DQLITE_DEBUG, FORMAT, ##__VA_ARGS__);

#endif /* LOGGING_H_ */