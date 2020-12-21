#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define RPIPE 0
#define WPIPE 1

char *indent = "===============";

int main(void) {
	int sv1[2];
	int sv2[2];
	int pid, other_pid;
	int bytes;
	int to_child, from_child;
	int size_of_int = sizeof(int);

	if (pipe(sv1) < 0) {
		fprintf(stderr, "pipe error (1)!\n");
		exit(-1);
	}
	

	if (pipe(sv2) <0) {
		fprintf(stderr, "pipe error (2)!\n");
		exit(-1);
	}
	
	pid = fork();
	if (pid < 0) {
		fprintf(stderr, "fork error!\n");
		exit(-1);
	} else if (pid == 0) {
		int to_parent, from_parent;
		close(sv1[WPIPE]);
		close(sv2[RPIPE]);

		to_parent = sv2[WPIPE];
		from_parent = sv1[RPIPE];

		pid = getpid();
		char  aname[4];
		bytes = read(from_parent, aname, size_of_int);
		if (bytes < size_of_int) {
			fprintf(stderr, "error\n");
			exit(-1);
		}
		printf("Child: the parent's name is %s\n", aname);
		printf("child is exiting\n");
		exit(0);
	}	

	close(sv1[RPIPE]);
	close(sv2[WPIPE]);

	to_child = sv1[WPIPE];
	from_child = sv2[RPIPE];
	
	//bytes = read(from_child, &other_pid, size_of_int);
	//if (bytes < size_of_int) {
	//	fprintf(stderr, "error\n");
	//	exit(-1);
	//}
	//printf("%s parent: the child's pid is %d\n", indent, other_pid);

	pid = getpid();
	char myname[4] = "Roc";
	bytes = write(to_child, myname, size_of_int);
	if (bytes != size_of_int) {
		fprintf(stderr, "error\n");
		exit(1);
	}
	printf("%s parent is exiting\n", indent);
	return 0;




}
