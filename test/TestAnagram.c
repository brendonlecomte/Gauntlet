#include "unity.h"
#include "unity_fixture.h"
#include "gauntlet.h"

TEST_GROUP(Anagram);


TEST_SETUP(Anagram)
{
}

TEST_TEAR_DOWN(Anagram)
{
}

TEST(Anagram, BasicMatch)
{
	const char* a = "silent"; 
	const char* b = "listen";
	TEST_ASSERT_TRUE(anagram(a, b));
}

TEST(Anagram, ComplexMatch)
{
	const char* a = "abcabcxyzxyzjkljkl"; 
	const char* b = "axjjxabykbykczlczl";
	TEST_ASSERT_TRUE(anagram(a, b));
}

TEST(Anagram, BasicFail)
{
	const char* a = "silent"; //655
	const char* b = "listes";
	TEST_ASSERT_FALSE(anagram(a, b));
}


TEST(Anagram, TotalMatchFail)
{
	const char* a = "silent"; 
	const char* b = "absrst";
	TEST_ASSERT_FALSE(anagram(a, b));
}

TEST(Anagram, MismatchLengthFail)
{
	const char* a = "aaabbb"; 
	const char* b = "aaabbbbb";
	TEST_ASSERT_FALSE(anagram(a, b));
}

TEST(Anagram, ZeroLengthFail)
{
	const char* a = ""; 
	const char* b = "";
	TEST_ASSERT_FALSE(anagram(a, b));
}
