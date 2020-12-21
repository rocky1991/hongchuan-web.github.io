#define _POSIX_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <errno.h>

extern int errno;

int main(int argc, char* argv[]) {
	if (argc < 2) {
		fprintf(stderr, "Please provide a path to a photo to `display`.\n");
		fprintf(stderr, " $ ./exec_display PHOTO\n");
		exit(-1);
	}
	
	//fprintf(stderr, "test out stderr\n");
	int rc, display_pid;
	char *photo = argv[1];
	fprintf(stdout, "-> Displaying: '%s'\n", photo);
	fprintf(stdout, "(It may take a few seconds to start X...)\n");
	
	display_pid = fork();
	if (display_pid == 0) {
		rc = execlp("display", "display", photo, NULL);
		fprintf(stderr, "**error: connot display '%s'.**\n", photo);
		exit(-2);
	}
	
	sleep(5);
	rc = kill(display_pid, SIGTERM);
	if (rc < 0) {
		int errnum = errno;
		fprintf(stderr, "Value of errno: %d (%s) \n", errnum, strerror(errnum));
		exit(-3);
	}
	return 0;
}
