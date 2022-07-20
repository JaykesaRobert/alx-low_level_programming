#include "main.h"

#define WILD '*'

/**
 * match_after_wild - check if a substring after wildcard matches s1
 * @s1: string 1
 * @s2: string 2
 * @post_wild: placeholder for position right after wildcard
 * Return: SUCCESS ? 1 : 0
 */

int match_after_wild(char *s1, char *s2, char *post_wild)
{
	if (*s1 == END && *s2 == END)
		return (TRUE);
	if (*s1 == END && *s2 == WILD)
		return (match_after_wild(s1, s2 + 1, s2 + 1));
	if (*s1 == END && *s2 != END)
		return (NULL);
	if (*s2 == WILD)
		return (match_after_wild(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (match_after_wild(s1 + 1, s2 + 1, post_wild));
	else
		return (match_after_wild(s1 + 1, post_wild, post_wild));
}

/**
 * wildcmp - compare if string with wildcard mattches
 * @s1: string 1
 * @s2: string 2
 * Return: SUCCESS ? 1 : 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == END && *s2 == END)
		return (TRUE);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == WILD)
		return (match_after_wild(s1, (s2 + 1), (s2 + 1)));
	else
		return (NULL);
}
