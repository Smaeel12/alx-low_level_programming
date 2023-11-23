#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main(void)
{
	char key;
	int key_sum = 0;

	srand(time(NULL));
	while (key_sum <= 2772)
	{
		key = rand() % 94 + 33;
		key_sum += key;
		if (key_sum > 2772)
		{
			int temp = key_sum - 2772;
			key_sum -= key;
			key = key - temp;
			printf("%c", key);
			break;
		}
		printf("%c", key);
	}
	printf("%i\n", key_sum);
	return (0);
}
