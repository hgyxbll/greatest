#include "greatest.h"
 
int main(int argc, char **argv) {
	greatest_init();
	/* Handle command-line arguments, etc. */
    greatest_parse_args(argc, argv);                                

	//auto generated start
    RUN_SUITE(suite1);
	RUN_SUITE(suite2);
	//auto generated end

	return greatest_report();

}
