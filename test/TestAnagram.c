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
	char* a = "silent"; 
	char* b = "listen";
	TEST_ASSERT_TRUE(anagram(a, b));
}

TEST(Anagram, ComplexMatch)
{
	char* a = "abcabcxyzxyzjkljkl"; 
	char* b = "axjjxabykbykczlczl";
	TEST_ASSERT_TRUE(anagram(a, b));
}

TEST(Anagram, BasicFail)
{
	char* a = "silent"; //655
	char* b = "listes";
	TEST_ASSERT_FALSE(anagram(a, b));
}


TEST(Anagram, TotalMatchFail)
{
	char* a = "silent"; 
	char* b = "absrst";
	TEST_ASSERT_FALSE(anagram(a, b));
}

TEST(Anagram, MismatchLengthFail)
{
	char* a = "aaabbb"; 
	char* b = "aaabbbbb";
	TEST_ASSERT_FALSE(anagram(a, b));
}

TEST(Anagram, ZeroLengthFail)
{
	char* a = ""; 
	char* b = "";
	TEST_ASSERT_FALSE(anagram(a, b));
}
