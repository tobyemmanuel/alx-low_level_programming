/*
 * File: 0-isupper.c
 * Author: Tobi
 */

#include "main.h"

/**
 * _isupper - Check for uppercase characters.
 * @c: The character to check.
 *
 * Return 1 if character is uppercase and 0 if otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
