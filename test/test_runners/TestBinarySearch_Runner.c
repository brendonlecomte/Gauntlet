#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(BinarySearch)
{
	RUN_TEST_CASE(BinarySearch, BasicSearch);
	RUN_TEST_CASE(BinarySearch, NullPtr);
	RUN_TEST_CASE(BinarySearch, MissingValues);
}