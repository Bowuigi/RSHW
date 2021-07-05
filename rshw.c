#include <stdlib.h>
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>

/*
 * Simple readline wrapper to dash, or any minimalist shell
 * Adds filename completion, (emacs/vi) keybindings and cursor
 * 
 * At the cost of:
 * Runtime declared aliases do not work
*/

char *nulltoexit(char *str) {
	if (str==NULL)
		return "exit";
	return str;
}

int main(void) {
	char cmd[1024]="ls";
	char *prompt="rshw >";

	while (1) {
		strcpy(cmd,nulltoexit(readline(prompt)));
		if (!strcmp(cmd,"exit"))
			break;
		system(cmd);
		if (strcmp(cmd,""))
			add_history(cmd);
	}
}
