#include "unity.h"
#include "unity_fixture.h"
#include "gauntlet.h"

TEST_GROUP(BinarySearch);


TEST_SETUP(BinarySearch)
{

}

TEST_TEAR_DOWN(BinarySearch)
{
}

TEST(BinarySearch, BasicSearch)
{
	unsigned a[10] = {0, 1, 2, 3, 4, 5, 6, 7 ,8, 9};

	for(int i = 0; i < 10; ++i)
	{
		TEST_ASSERT_EQUAL(i, binary_search( &a, 10, i));
	}

}

TEST(BinarySearch, NullPtr)
{
	TEST_ASSERT_EQUAL(-1, binary_search(NULL, 20, 2));
}

TEST(BinarySearch, MissingValues)
{
	unsigned a[10] = {0, 1, 2, 3, 4, 5, 6, 7 ,8, 9};

	for(int i = 0; i < 10; ++i)
	{
		TEST_ASSERT_EQUAL(-1, binary_search( &a, 10, i+10));
	}
}