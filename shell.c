#include "main.h"

int main(void)
{
	char *prom = "$ ";
	char *input = NULL; char *dir;
	char **argv;
	size_t len = 0, len2;
/*	int i;*/

	while (1)
	{
		write(1, prom, _strlen(prom)); ;
		getline(&input, &len, stdin);
		len2 = _strlen(input);
		input[len2 - 1] = '\0';
		if (_strcmp(input, "exit"))
		{
			if (input)
				free(input);
			break;
		}
		argv = _argv(input);
		dir = _strcat("/bin/", argv[0]);
		if (execve(dir, argv, NULL) == -1)
				perror("Error");
	}
	return (0);
}
