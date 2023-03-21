#include "main.h"

/**
 * _islower -  To text lower case
 *
 * @a: perameter to be printed
 *
 * Return: to retuen 1 when lower a lower case and 0 when not
 */

int _islower(int a)
{
	if (a >= 97 && a <= 122)
		return (1);
	else
		return (0);
}
