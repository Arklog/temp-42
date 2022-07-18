#include <cstdio>
#include <cstring>
#include <unistd.h>

int	stdout_backup;
int	pipefd[2];
char	buffer[128];

void	start_stdout_redirect() {
	memset(buffer, 0, 128);
	stdout_backup = dup(fileno(stdout));
	pipe2(pipefd, 0);
	dup2(pipefd[1], fileno(stdout));
}

void	end_stdout_redirect() {
	fflush(stdout);
	close(pipefd[1]);
	dup2(stdout_backup, fileno(stdout));
	read(pipefd[0], buffer, 127);
}

