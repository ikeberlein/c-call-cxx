#include <stdlib.h>
#include <stdio.h>

void cxx_module_init();

static void (*the_callback)(const char*) = NULL;

int
main() {
	cxx_module_init();
	
	if (the_callback == NULL) {
		fprintf(stderr, "fail: the callback is not initialized\n");
		return EXIT_FAILURE;
	}

	the_callback("and this is Message from C");

	return EXIT_SUCCESS;
}

void
register_callback(void (*callback)(const char*)) {
	the_callback = callback;
}

