#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
	// allocate lo spazio per una stringa nello heap
	char* s = malloc(1+strlen("Hello World!"));
	strcpy(s, "Hello World!");

	printf("%s\n", s);

	free(s);

	return 0;
}
