#include "gtest/gtest.h"

#if __has_include("ex00/ft_iterative_factorial.c")
namespace ex00 {
#include "ex00/ft_iterative_factorial.c"

	TEST(ex00, ft_iterative_factorial) {
		EXPECT_EQ(0, ex00::ft_iterative_factorial(-1));
		EXPECT_EQ(1, ex00::ft_iterative_factorial(0));
		EXPECT_EQ(1, ex00::ft_iterative_factorial(1));
		EXPECT_EQ(720, ex00::ft_iterative_factorial(6));
	}
}
#else
TEST(ex00, ft_iterative_factorial) {
	EXPECT_STREQ("ex00/ft_iterative_factorial.c", "");
}
#endif



#if __has_include("ex01/ft_recursive_factorial.c")
namespace ex01 {
#include "ex01/ft_recursive_factorial.c"

	TEST(ex01, ft_recursive_factorial) {
		EXPECT_EQ(0, ex01::ft_recursive_factorial(-1));
		EXPECT_EQ(1, ex01::ft_recursive_factorial(0));
		EXPECT_EQ(1, ex01::ft_recursive_factorial(1));
		EXPECT_EQ(720, ex01::ft_recursive_factorial(6));
	}
}
#else
TEST(ex01, ft_recursive_factorial) {
	EXPECT_STREQ("ex01/ft_recursive_factorial.c", "");
}
#endif



#if __has_include("ex02/ft_iterative_power.c")
namespace ex02 {
#include "ex02/ft_iterative_power.c"

	TEST (ex02, ft_iterative_power) {
		EXPECT_EQ(0, ex02::ft_iterative_power(2, -1));
		EXPECT_EQ(1, ex02::ft_iterative_power(0, 0));
		EXPECT_EQ(1, ex02::ft_iterative_power(2, 0));
		EXPECT_EQ(4, ex02::ft_iterative_power(2, 2));
		EXPECT_EQ(8, ex02::ft_iterative_power(2, 3));
		EXPECT_EQ(9, ex02::ft_iterative_power(3, 2));
	}
}
#else
TEST(ex02, ft_iterative_power) {
	EXPECT_STREQ("ex02/ft_iterative_power.c", "");
}
#endif



#if __has_include("ex03/ft_recursive_power.c")
namespace ex03 {
#include "ex03/ft_recursive_power.c"

	TEST (ex03, ft_recursive_power) {
		EXPECT_EQ(0, ex03::ft_recursive_power(2, -1));
		EXPECT_EQ(1, ex03::ft_recursive_power(0, 0));
		EXPECT_EQ(1, ex03::ft_recursive_power(2, 0));
		EXPECT_EQ(4, ex03::ft_recursive_power(2, 2));
		EXPECT_EQ(8, ex03::ft_recursive_power(2, 3));
		EXPECT_EQ(9, ex03::ft_recursive_power(3, 2));
	}
}
#else
TEST(ex03, ft_recursive_power) {
	EXPECT_STREQ("ex03/ft_recursive_power.c", "");
}
#endif



#if __has_include("ex04/ft_fibonacci.c")
namespace ex04 {
#include "ex04/ft_fibonacci.c"

	TEST(ex04, ft_fibonacci) {
		EXPECT_EQ(-1, ex04::ft_fibonacci(-1));
		EXPECT_EQ(0, ex04::ft_fibonacci(0));
		EXPECT_EQ(1, ex04::ft_fibonacci(1));
		EXPECT_EQ(1, ex04::ft_fibonacci(2));
		EXPECT_EQ(3, ex04::ft_fibonacci(4));
		EXPECT_EQ(8, ex04::ft_fibonacci(6));
	}
}
#else
TEST(ex04, ft_fibonacci) {
	EXPECT_STREQ("ex04/ft_fibonacci.c", "");
}
#endif



#if __has_include("ex05/ft_sqrt.c")
namespace ex05 {
#include "ex05/ft_sqrt.c"

	TEST(ex05, ft_sqrt) {
		EXPECT_EQ(1, ex05::ft_sqrt(1));
		EXPECT_EQ(2, ex05::ft_sqrt(4));
		EXPECT_EQ(3, ex05::ft_sqrt(9));
		EXPECT_EQ(0, ex05::ft_sqrt(5));
	}
}
#else
TEST(ex05, ft_sqrt) {
	EXPECT_STREQ("ex05/ft_sqrt.c", "");
}
#endif



#if __has_include("ex06/ft_is_prime.c")
namespace ex06 {
#include "ex06/ft_is_prime.c"

	TEST(ex06, ft_is_prime) {
		EXPECT_EQ(0, ex06::ft_is_prime(0));
		EXPECT_EQ(0, ex06::ft_is_prime(1));
		EXPECT_EQ(1, ex06::ft_is_prime(2));
		EXPECT_EQ(1, ex06::ft_is_prime(3));
		EXPECT_EQ(0, ex06::ft_is_prime(4));
		EXPECT_EQ(0, ex06::ft_is_prime(972));
		EXPECT_EQ(1, ex06::ft_is_prime(971));
	}
}
#else
TEST(ex06, ft_is_prime) {
	EXPECT_STREQ("ex06/ft_is_prime.c", "");
}
#endif



#if __has_include("ex07/ft_find_next_prime.c")
namespace ex07 {
#include "ex07/ft_find_next_prime.c"

	TEST(ex07, ft_find_next_prime) {
		EXPECT_EQ(2, ex07::ft_find_next_prime(0));
		EXPECT_EQ(2, ex07::ft_find_next_prime(1));
		EXPECT_EQ(13, ex07::ft_find_next_prime(11));
		EXPECT_EQ(211, ex07::ft_find_next_prime(199));
	}
}
#else
TEST(ex07, ft_find_next_prime) {
	EXPECT_STREQ("ex07/ft_find_next_prime.c", "");
}
#endif

int main() {
	testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
