#include <stdio.h>

/**
 * _isalpha - checks if character is a letter
 * both lowercase or upper
 * @c: The character to be checked.
 * @return: 1 if c is an alphabetic character, 0 otherwise.
*/
int _isalpha(int c) 
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);

}
