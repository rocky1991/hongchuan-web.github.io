#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void) {
	int rc;
	char * photo_in = "photo.jpg";
	char * photo_out = "photo_out.jpg";

	fprintf(stdout, "-> Converting '%s'\n", photo_in);

	rc = fork();
	if (rc == 0) {
		rc = execlp("echo", "hello","hello", NULL);
		//rc = execlp("convert", "convert", "-geometry", "50%", "-monochrome", photo_in, photo_out, NULL);
		fprintf(stderr, "**error: connot convert '%s',.** \n", photo_in);
		exit(-1);
	}

	return 0;
}
