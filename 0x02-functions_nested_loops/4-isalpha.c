#include "main.h"

/**
 * _isalpha - checks whether its uppercase or lowercase
 * @c: is a character to be checked
 * Returns: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(char c)
{
	if (c < 65 && c> 122)
	{
		return (0);
	}
	else 
	{
		return (1);
	}
}
