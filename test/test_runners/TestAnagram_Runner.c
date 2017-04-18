#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP_RUNNER(Anagram)
{
	RUN_TEST_CASE(Anagram, BasicMatch);
	RUN_TEST_CASE(Anagram, ComplexMatch);
	RUN_TEST_CASE(Anagram, BasicFail);
	RUN_TEST_CASE(Anagram, TotalMatchFail);
	RUN_TEST_CASE(Anagram, ZeroLengthFail);
	RUN_TEST_CASE(Anagram, MismatchLengthFail);
}