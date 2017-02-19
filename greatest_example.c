#include <stdio.h>
#include <stdlib.h>

#include "greatest.h"

/* Declare a local suite. */
SUITE(other_suite);

TEST blah(void) {
    PASS();
}

int teardown_was_called;
static void trace_setup(void *arg) {
	printf("-- in setup callback\n");
	teardown_was_called = 0;
	(void)arg;
}

static void trace_teardown(void *arg) {
	printf("-- in teardown callback\n");
	teardown_was_called = 1;
	(void)arg;
}


GREATEST_SUITE(other_suite) {
	/* Add setup/teardown for each test case. */
	GREATEST_SET_SETUP_CB(trace_setup, NULL);
	GREATEST_SET_TEARDOWN_CB(trace_teardown, NULL);

    RUN_TEST(blah);
}
