#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 256

void shell_prompt(void);
void fork_function(char *buffer);
char *custom_getline_function();
char *custom_strtok(char *input);


#endif
