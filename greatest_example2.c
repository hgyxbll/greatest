#include "greatest.h"



TEST(atoi) {
	ASSERT(atoi("3") == 5);
	ASSERT(atoi("4") == 5);
	ASSERT(atoi("5") == 5);

}

TEST(memcmp)
{
	char sz[3] = "12";
	char sz2[3] = "12";
	ASSERT(memcmp(sz, sz2, 2) == 0);
}
TEST(memcmp1)
{
	SKIP();
	char sz[3] = "12";
	char sz2[3] = "12";
	ASSERT(memcmp(sz, sz2, 2) == 0);
}
TEST(memcmp2)
{
	char sz[3] = "12";
	char sz2[3] = "12";
	ASSERT(memcmp(sz, sz2, 2) == 0);
}
TEST(memcmp3)
{
	char sz[3] = "12";
	char sz2[3] = "12";
	ASSERT(memcmp(sz, sz2, 2) == 0);
}
TEST(memcmp4)
{
	char sz[3] = "12";
	char sz2[3] = "12";
	ASSERT(memcmp(sz, sz2, 2) == 0);
}
TEST(memcmp5)
{
	char sz[3] = "12";
	char sz2[3] = "12";
	ASSERT(memcmp(sz, sz2, 2) == 0);
}
TEST(atoi2) {
	ASSERT(atoi("3") == 5);
	ASSERT(atoi("4") == 5);
	ASSERT(atoi("5") == 5);

}
SUITE(suite2) {
	RUN_TEST(atoi);
	RUN_TEST(memcmp);
	RUN_TEST(memcmp1);
	RUN_TEST(memcmp2);
	RUN_TEST(memcmp3);
	RUN_TEST(memcmp4);
	RUN_TEST(memcmp5);
	RUN_TEST(atoi2);
}
