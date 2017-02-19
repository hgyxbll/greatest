#include <stdio.h>
#include <stdlib.h>

#include "greatest.h"

#define MY_SUITE(NAME) void NAME(void); void NAME(void)
//#define MY_TEST(NAME) static enum greatest_test_res NAME(void); RUN_TEST(NAME);static enum greatest_test_res NAME(void)
#define MY_TEST(NAME) static enum greatest_test_res NAME(void); static enum greatest_test_res NAME(void)


TEST blah(void) {
    PASS();
}

MY_TEST(get_str)
{

}

GREATEST_SUITE(my_suite) {
	//MY_TEST(get_num){
	//	int i=1,j=2;

	//	ASSERT(i + j == 4);
	//	PASS();
	//}
}
