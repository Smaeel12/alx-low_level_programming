#include "main.h"
/**
 * get_endianness - checks the endianness of the system
 * Return: 1 if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int num = 1;
	char *byte_ptr = (char *)&num;

	return ((byte_ptr[0] == 1) ? 1 : 0);
}
