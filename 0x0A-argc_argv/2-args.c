#include <stdio.h>
int main(int argc, char *argv[])
{
	int i, j;

	for(i = 0; i < argc; i++)
	{
		for(j = 0; argv[i][j] != '\0'; j++)
			putchar(argv[i][j]);
		putchar('\n');
	}
	return (0);	
}
