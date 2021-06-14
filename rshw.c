#include <readline/readline.h>
#include <readline/history.h>
#include <stdlib.h>

/*
 * Simple readline wrapper to dash, or any minimalist shell
 * Adds filename completion, (emacs/vi) keybindings and cursor
 * 
 * At the cost of:
 * Segfaults on EOF
 * Runtime declared aliases do not work
*/
int main(void) {
	char cmd[1024]="ls";
	char *prompt="rshw >";

	while (1) {
		strcpy(cmd,readline(prompt));
		if (!strcmp(cmd,"exit"))
			break;
		system(cmd);
		add_history(cmd);
	}
}
