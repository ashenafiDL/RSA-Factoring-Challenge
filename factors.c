#define  _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	FILE *file;
	char *line;
	size_t len = 0;
	int num = 0, i;

	if (argc != 2)
		return (-1);

	file = fopen(argv[1], "r");
	while (getline(&line, &len, file) != -1)
	{
		num = atoi(line);
		for (i = num - 1; i > 1; i--)
		{
			if (num % i == 0)
			{
				printf("%d=%d*%d\n", num, i, num / i);
				break;
			}
		}
	}

	return (0);
}
