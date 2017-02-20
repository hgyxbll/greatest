#include <stdio.h>
#include <stdlib.h>

#include "greatest.h"

TEST(strcpy) {
	char sz[10];
	strcpy(sz, "123");
	ASSERT(strcmp(sz, "123") == 0);
}

TEST(strcat) {
	char sz[10] ="";
	strcat(sz, "123");
	ASSERT(strcmp(sz, "123") == 0);
}

TEST(strcmp) {
	char sz[10] = "";
	strcat(sz, "123");
	ASSERT(strcmp(sz, "126") == 0);
	ASSERT(strcmp(sz, "124") == 0);
	ASSERT(strcmp(sz, "123") == 0);
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


SUITE(suite1) {
	/* Add setup/teardown for each test case. */
	SET_SETUP(trace_setup, NULL);
	SET_TEARDOWN(trace_teardown, NULL);

	//auto generated start
    RUN_TEST(strcpy);
	RUN_TEST(strcat);
	RUN_TEST(strcmp);
	//auto generated end
}
