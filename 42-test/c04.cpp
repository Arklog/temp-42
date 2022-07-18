#include "gtest/gtest.h"
#include "redirect.cpp"
#include <cstdio>
#include <unistd.h>
#include <cstring>

#if __has_include("ex00/ft_strlen.c")
namespace ex00 {
#include "ex00/ft_strlen.c"
	TEST(ex00, ft_strlen) {
		EXPECT_EQ(0, ex00::ft_strlen((char*)""));
		EXPECT_EQ(1, ex00::ft_strlen((char*)"a"));
		EXPECT_EQ(10, ex00::ft_strlen((char*)"aaaaaaaaaa"));
	}
}
#else
TEST(ex00, ft_strlen) {
	EXPECT_STREQ("ex00/ft_strlen.c", "");
}
#endif



#if __has_include("ex01/ft_putstr.c")
namespace ex01 {
#include "ex01/ft_putstr.c"

	TEST(ex01, ft_putstr) {
		start_stdout_redirect();
		ft_putstr((char*)"");
		end_stdout_redirect();
		EXPECT_STREQ("", buffer);

		start_stdout_redirect();
		ft_putstr((char*)"abcde");
		end_stdout_redirect();
		EXPECT_STREQ("abcde", buffer);

		start_stdout_redirect();
		ft_putstr((char*)"ab\0de");
		end_stdout_redirect();
		EXPECT_STREQ("ab", buffer);
	}
}
#else
TEST(ex01, ft_putstr) {
	EXPECT_STREQ("ex01/ft_putstr.c", "");
}
#endif



#if __has_include("ex02/ft_putnbr.c")
namespace ex02 {
#include "ex02/ft_putnbr.c"

	TEST(ex02, ft_putnbr) {
		start_stdout_redirect();
		ex02::ft_putnbr(0);
		end_stdout_redirect();
		EXPECT_STREQ("0", buffer);

		start_stdout_redirect();
		ex02::ft_putnbr(-1);
		end_stdout_redirect();
		EXPECT_STREQ("-1", buffer);

		start_stdout_redirect();
		ex02::ft_putnbr(-198);
		end_stdout_redirect();
		EXPECT_STREQ("-198", buffer);

		start_stdout_redirect();
		ex02::ft_putnbr(987);
		end_stdout_redirect();
		EXPECT_STREQ("987", buffer);
	}
}
#else
TEST(ex02, ft_putnbr) {
	EXPECT_STREQ("ex02/ft_putnbr.c", "");
}
#endif



#if __has_include("ex03/ft_atoi.c")
namespace ex03 {
#include "ex03/ft_atoi.c"
	TEST(ex03, ft_atoi) {
		EXPECT_EQ(-1234, ex03::ft_atoi((char*)" ---+--+1234ab567"));
		EXPECT_EQ(999, ex03::ft_atoi((char*)"999"));
	}
}
#else
TEST(ex03, ft_atoi) {
	EXPECT_STREQ("ex03/ft_atoi.c", "");
}
#endif


#if __has_include("ex04/ft_putnbr_base.c")
namespace ex04 {
#include "ex04/ft_putnbr_base.c"
	
	TEST(ex04, ft_putnbr_base) {
		start_stdout_redirect();
		ex04::ft_putnbr_base(5, (char*)"01");
		end_stdout_redirect();
		EXPECT_STREQ("101", buffer);

		start_stdout_redirect();
		ex04::ft_putnbr_base(16, (char*)"0123456789abcdef");
		end_stdout_redirect();
		EXPECT_STREQ("10", buffer);

		start_stdout_redirect();
		ex04::ft_putnbr_base(15, (char*)"0123456789abcdef");
		end_stdout_redirect();
		EXPECT_STREQ("f", buffer);

		start_stdout_redirect();
		ex04::ft_putnbr_base(-15, (char*)"0123456789abcdef");
		end_stdout_redirect();
		EXPECT_STREQ("-f", buffer);

		start_stdout_redirect();
		ex04::ft_putnbr_base(-15, (char*)"0023456789abcdef");
		end_stdout_redirect();
		EXPECT_STREQ("", buffer);

		start_stdout_redirect();
		ex04::ft_putnbr_base(-15, (char*)"0-23456789abcdef");
		end_stdout_redirect();
		EXPECT_STREQ("", buffer);

		start_stdout_redirect();
		ex04::ft_putnbr_base(-15, (char*)"f");
		end_stdout_redirect();
		EXPECT_STREQ("", buffer);

		start_stdout_redirect();
		ex04::ft_putnbr_base(-15, (char*)"");
		end_stdout_redirect();
		EXPECT_STREQ("", buffer);
	}
}
#else
TEST (ex04, ft_putnbr_base) {
	EXPECT_STREQ("ex04/ft_putnbr_base.c", "");
}
#endif



#if __has_include("ex05/ft_atoi_base.c")
namespace ex05 {
#include "ex05/ft_atoi_base.c"

	TEST(ex05, ft_atoi_base) {
		EXPECT_EQ(5, ex05::ft_atoi_base((char*)"101", (char*)"01"));
		EXPECT_EQ(0, ex05::ft_atoi_base((char*)"101", (char*)"1"));
		EXPECT_EQ(0, ex05::ft_atoi_base((char*)"101", (char*)""));
		EXPECT_EQ(0, ex05::ft_atoi_base((char*)"101", (char*)"101"));
		EXPECT_EQ(0, ex05::ft_atoi_base((char*)"101", (char*)"1 "));
		EXPECT_EQ(0, ex05::ft_atoi_base((char*)"101", (char*)"1+"));
		EXPECT_EQ(15, ex05::ft_atoi_base((char*)"f", (char*)"0123456789abcdef"));
	}
}
#else
TEST(ex05, ft_atoi_base) {
	EXPECT_STREQ("ex05/ft_atoi_base.c", "");
}
#endif

int main()
{
	testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
