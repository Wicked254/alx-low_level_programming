#include "main.h"
/**
 * _isalpha - Shows 1 if the input is a
 * letter Another cases, shows 0
 * Description- Check if character is a alphabet character.
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
