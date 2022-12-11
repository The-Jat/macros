#ifndef _MACROS_H_
#define _MACROS_H_

#define min(a, b)  ((a) < (b) ? (a) : (b))

#define isdigit(d)  (((d) >= '0') && ((d) <= '9'))

#define STRING(arg)      STRING_ARG(arg)
#define STRING_ARG(arg)  #arg

#endif
