#include <stdio.h>
#include <stdlib.h>

#ifndef _STRHELP_
#define _STRHELP_

/* Find the length of a string.
 * Parameters:
 * str:  A '\0' terminated string
 * Returns: the length of the string.
 */
int my_strlen(char *str) {
    int len;

    return len;
}

/* Reverses a string in-place.
 * input: a null-terminated string.
 * returns: reverses and returns the same string.
 */
char *my_strrev(char *str) {

    return str;
}

/* Reverses the characters in a string starting from the "start" index
 * to the end index.
 * input:
 * str: a null-terminated string.
 * start: the start index.
 * end: the end index.
 * returns: the same string with the characters shifted.
 */
char *my_strrev_range(char *str, int start, int end) {

    return str;
}

/* Compares two strings.
 * input:
 * s1: string 1.
 * s2: string 2.
 * returns: 0 if both the strings are the same
 *          non-zero otherwise
 */
int my_str_cmp(char *s1, char *s2) {

    return 0;
}

/* compares two strings ignoring the cases.
 * input:
 * s1: string 1.
 * s2: string 2.
 * returns: 0 if both are same
 *          non-0 otherwise
 * eg: my_str_i_cmp("HellO1", "hello1") returns 0
 */
int my_str_i_cmp(char *s1, char *s2) {

    return 0;
}

/* compares first "size" characters of 2 strings
 * input:
 * s1: string 1
 * s2: string 2
 * returns: 0 if both are equal
 *          non-0 otherwise.
 */
int my_str_cmp_range(char *s1, char *s2, char *size) {

    return 0;
}

#endif