#ifndef _MACROS_H_
#define _MACROS_H_

#define ispwr2(x)  (((x) & ((x) - 1)) == 0)

#define min(a, b)  ((a) < (b) ? (a) : (b))
#define max(a, b)  ((a) > (b) ? (a) : (b))

#define min3(a, b, c)  ((a) < (b) ? (min(a, c)) : (min(b, c)))
#define max3(a, b, c)  ((a) > (b) ? (max(a, c)) : (max(b, c)))

#define isdigit(d)  (((d) >= '0') && ((d) <= '9'))
#define islower(c)     (((c) >= 'a') && ((c) <= 'z'))
#define isupper(c)     (((c) >= 'A') && ((c) <= 'Z'))
#define isalpha(c)     (is_lower((c)) || is_upper((c)))
#define isalphanum(c)  (is_alpha((c)) || is_digit((c)))

#define STRING(arg)      STRING_ARG(arg)
#define STRING_ARG(arg)  #arg

#endif
