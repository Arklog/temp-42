#include "gtest/gtest.h"
#include "redirect.cpp"

#if __has_include("ex00/ft_ft.c")
namespace ex00 {
#include "ex00/ft_ft.c"

	TEST(ex00, ft_ft) {
		int i;
		ex00::ft_ft(&i);
		EXPECT_EQ(42, i);
	}
}
#else
TEST(ex00, ft_ft) {
	EXPECT_STREQ("ex00/ft_ft.c", "");
}
#endif



#if __has_include("ex01/ft_ultimate_ft.c")
namespace ex01 {
#include "ex01/ft_ultimate_ft.c"

	TEST(ex01, ft_ultimate_ft) {
		int a;
		int *b = &a;
		int **c = &b;
		int ***d = &c;
		int ****e = &d;
		int *****f = &e;
		int ******g = &f;
		int *******h = &g;
		int ********i = &h;
		ex01::ft_ultimate_ft(&i);
		EXPECT_EQ(42, a);
	}
}
#else
TEST(ex01, ft_ultimate_ft){
	EXPECT_STREQ("ex01/ft_ultimate_ft.c", "");
}
#endif



#if __has_include("ex02/ft_swap.c")
namespace ex02 {
#include "ex02/ft_swap.c"
	
	TEST(ex02, ft_swap) {
		int a = 0;
		int b = 1;
		ex02::ft_swap(&a, &b);

		EXPECT_EQ(1, a);
		EXPECT_EQ(0, b);
	}
}
#else
TEST(ex02, ft_swap) {
	EXPECT_STREQ("ex02/ft_swap.c", "");
}
#endif



#if __has_include("ex03/ft_div_mod.c")
namespace ex03 {
#include "ex03/ft_div_mod.c"

	TEST(ex03, ft_div_mod) {
		int a,  b, div, mod;
		a = 5;
		b = 2;

		ex03::ft_div_mod(a, b, &div, &mod);
		EXPECT_EQ(a / b, div);
		EXPECT_EQ(a % b, mod);
	}
}
#else
TEST(ex03, ft_div_mod) {
	EXPECT_STREQ("ex03/ft_div_mod.c", "");
}
#endif



#if __has_include("ex04/ft_ultimate_div_mod.c")
namespace ex04 {
#include "ex04/ft_ultimate_div_mod.c"

	TEST(ex04, ft_ultimate_div_mod) {
		int a = 5;
		int b = 2;
		ex04::ft_ultimate_div_mod(&a, &b);

		EXPECT_EQ(5 / 2, a);
		EXPECT_EQ(5 % 2, b);
	}
}
#else
TEST(ex04, ft_ultimate_div_mod) {
	EXPECT_STREQ("ex04/ft_ultimate_div_mod.c", "");
}
#endif



#if __has_include("ex05/ft_putstr.c")
namespace ex05 {
#include "ex05/ft_putstr.c"

	TEST(ex05, ft_putstr) {
		start_stdout_redirect();
		ex05::ft_putstr((char*)"abcdef");
		end_stdout_redirect();
		EXPECT_STREQ("abcdef", buffer);

		start_stdout_redirect();
		ex05::ft_putstr((char*)"ab\0def");
		end_stdout_redirect();
		EXPECT_STREQ("ab", buffer);

		start_stdout_redirect();
		ex05::ft_putstr((char*)"");
		end_stdout_redirect();
		EXPECT_STREQ("", buffer);
	}
}
#else
TEST(ex05, ft_putstr) {
	EXPECT_STREQ("ex05/ft_putstr.c", "");
}
#endif



#if __has_include("ex06/ft_strlen.c")
namespace ex06 {
#include "ex06/ft_strlen.c"

	TEST(ex06, ft_strlen) {
		EXPECT_EQ(0, ft_strlen((char*)""));
		EXPECT_EQ(1, ft_strlen((char*)"a\0dsf"));
		EXPECT_EQ(5, ft_strlen((char*)"aadsf"));
	}
}
#else
TEST(ex06, ft_strlen) {
	EXPECT_STREQ("ex06/ft_strlen.c", "");
}
#endif



#if __has_include("ex07/ft_rev_int_tab.c")
namespace ex07 {
#include "ex07/ft_rev_int_tab.c"

	TEST(ex07, ft_rev_int_tab) {
		int arr[] = {4, 3, 2, 1, 0};
		ex07::ft_rev_int_tab(arr, 5);

		for(int i = 0; i < 5; ++i) {
			EXPECT_EQ(i, arr[i]);
		}
	}
}
#else
TEST(ex07, ft_rev_int_tab) {
	EXPECT_STREQ("ex07/ft_rev_int_tab.c", "");
}
#endif



#if __has_include("ex08/ft_sort_int_tab.c")
namespace ex08 {
#include "ex08/ft_sort_int_tab.c"

	TEST(ex08, ft_sort_int_tab) {
		int arr[] = {0, 4, 1, 3, 2};
		ex08::ft_sort_int_tab(arr, 5);

		for(int i = 0; i < 5; ++i)
			EXPECT_EQ(i, arr[i]);
	}
}
#else
TEST(ex08, ft_sort_int_tab) {
	EXPECT_STREQ("ex08/ft_sort_int_tab.c", "");
}
#endif



int main() {
	testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
