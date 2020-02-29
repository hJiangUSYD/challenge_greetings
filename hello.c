#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
	if (argc > 1) {
	int n = strtol(argv[1],NULL,10);
	int r = rand();
	if (n ==r ) {
	printf("win");}
	else {
	printf ("random %d\n",r);
	}
	printf("%d\n", n);
	}
	

return 0;

}
