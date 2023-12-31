#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>

/**
 * struct path - struct path
 * @dir: pointer to str (directory)
 * @next: pointer to next node
 */

typedef struct path
{
	char *dir;
	struct path *next;
} path_t;

path_t *new_dir_list(const char *);
int _strcmp(char *, char *);
int _strlen(const char *);
char *_strdup(const char *);
char **_argv(char *);
int count_words(char *);
char *_strcat(char *, char *);
char *_getenv(const char *);
void free_grid(char **);
void free_ptr(char **);
void free_all(char **, char **);

/*HELPER FUNCTION TO SHELL*/
void chkatt(char *);
void getcmnd(char **, size_t *);
void inpmod(char **);

#endif
