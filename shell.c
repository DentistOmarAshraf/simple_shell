#include "main.h"

int main(void)
{
	char *prom = "$ ";
	char *input = NULL;
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
	/*	printf("User Input ==> %s\n", input);*/
		argv = _argv(input);
		argv[0] = _strcat("/bin/", argv[0]);
	/*	for (i = 0 ; argv[i] ; i++)
			printf("ch[%d] ==> %s\n", i, argv[i]);
		printf("ch[%d] ==> %s\n", i, argv[i]);*/
		if (execve(argv[0], argv, NULL) == -1)
				perror("Error\n");
	/*	printf("----------------------------\n");*/
	}
	return (0);
}
