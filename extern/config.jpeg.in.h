/* Auto-generated config.h file powered by cmake. */

/* Defined to 1 if the compiler supports prototype functions. */
#cmakedefine HAVE_PROTOTYPES 1

/* Defined to 1 if we have access to stddef.h */
#cmakedefine HAVE_STDDEF_H 1

/* Defined to 1 if we have access to stdlib.h */
#cmakedefine HAVE_STDLIB_H 1

/* Defined to 1 if we only have the BSD style strings.h file. */
#cmakedefine HAVE_STRING_H 1
#cmakedefine HAVE_STRINGS_H 1
#if defined(HAVE_STRINGS_H) && !defined(HAVE_STRING_H)
#define NEED_BSD_STRINGS 1
#endif

/* Defined to 1 if we have an unsigned char type. */
#cmakedefine HAVE_SIZEOF_UNSIGNED_CHAR 1
#if defined(HAVE_SIZEOF_UNSIGNED_CHAR)
#define HAVE_UNSIGNED_CHAR 1
#endif

/* Defined to 1 if we have an unsigned short type. */
#cmakedefine HAVE_SIZEOF_UNSIGNED_SHORT 1
#if defined(HAVE_SIZEOF_UNSIGNED_SHORT)
#define HAVE_UNSIGNED_SHORT 1
#endif

/* At some point, allow for defining CHAR_IS_UNSIGNED. */

/* Define to 1 if the sys types header is required. */
/* TODO: Figure out the right way of using this with size_t. */
#cmakedefine HAVE_SYS_TYPES_H 1
#if defined(HAVE_SYS_TYPES_H)
#define NEED_SYS_TYPES_H 1
#endif

/* Defined to 1 if short external names are needed for linking. */
#cmakedefine NEED_SHORT_EXTERNAL_NAMES 1

/* Defined to 1 if incomplete types are broken. */
#cmakedefine INCOMPLETE_TYPES_BROKEN 1

/* Windows gets a special definition of boolean for some reason. */
#if defined(WIN32)
#if !defined(__RPCNDR_H__)
typedef unsigned char boolean;
#endif
#define HAVE_BOOLEAN
#endif

