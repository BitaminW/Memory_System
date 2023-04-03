#include <unistd.h> // #include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include <err.h>	// #include <errhandlingapi.h>

static void child() {
	printf("I'm child! my pid is %d.\n", getpid());
	exit(EXIT_SUCCESS);
}


static void parent(pid_t pid_c){

}
