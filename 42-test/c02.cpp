#include "gtest/gtest.h"
#include <cstring>
#include <cstdio>

char	lowecase[]		= "ajhsdf";
char	uppercase[]		= "KHGIUSG";
char	numeric[]		= "1638264";
char	alpha_num[]		= "sjdfh9298";
char	mixed[]			= "87jDg{}][";
char	nullstr[]		= "";
char	*nullstrptr		= nullptr;

size_t
strlcpy(char * dst, const char * src, size_t maxlen) {
    const size_t srclen = strlen(src);
    if (srclen + 1 < maxlen) {
        memcpy(dst, src, srclen + 1);
    } else if (maxlen != 0) {
        memcpy(dst, src, maxlen - 1);
        dst[maxlen-1] = '\0';
    }
    return srclen;
}

namespace ex00 {
#include "ex00/ft_strcpy.c"

	TEST(ex00, ft_strcpy) {
		char dest[7];
		EXPECT_STREQ(lowecase, ex00::ft_strcpy(dest, lowecase));
	}
}

namespace ex01 {
#include "ex01/ft_strncpy.c"

	TEST(ex01, ft_strncpy) {
		char bytes3[3];
		char bytes7[7];
		char bytes10[10];

		EXPECT_STREQ(lowecase, ex01::ft_strncpy(bytes7, lowecase, 7));
		EXPECT_STREQ("ajhsdf\0\0\0", ex01::ft_strncpy(bytes10, lowecase, 10));
		EXPECT_EQ(0, strncmp(ex01::ft_strncpy(bytes3, mixed, 3), mixed, 3));
	}
}

namespace ex02 {
#include "ex02/ft_str_is_alpha.c"

	TEST(ex02, str_is_alpha) {
		EXPECT_EQ(1, ex02::ft_str_is_alpha(uppercase));
		EXPECT_EQ(1, ex02::ft_str_is_alpha(nullstr));
		EXPECT_EQ(0, ex02::ft_str_is_alpha(numeric));
		EXPECT_EQ(0, ex02::ft_str_is_alpha(mixed));
	}
}

namespace ex03 {
#include "ex03/ft_str_is_numeric.c"

	TEST(ex03, ft_str_is_numeric) {
		EXPECT_EQ(1, ex03::ft_str_is_numeric(numeric));
		EXPECT_EQ(1, ex03::ft_str_is_numeric(nullstr));
		EXPECT_EQ(0, ex03::ft_str_is_numeric(lowecase));
		EXPECT_EQ(0, ex03::ft_str_is_numeric(mixed));
	}
}

namespace ex04 {
#include "ex04/ft_str_is_lowercase.c"

	TEST(ex04, ft_str_is_lowecase) {
		EXPECT_EQ(1, ex04::ft_str_is_lowercase(lowecase));
		EXPECT_EQ(1, ex04::ft_str_is_lowercase(nullstr));
		EXPECT_EQ(0, ex04::ft_str_is_lowercase(uppercase));
		EXPECT_EQ(0, ex04::ft_str_is_lowercase(mixed));
	}
}

namespace ex05 {
#include "ex05/ft_str_is_uppercase.c"

	TEST(ex05, ft_str_is_uppercase) {
		EXPECT_EQ(1, ft_str_is_uppercase(uppercase));
		EXPECT_EQ(1, ft_str_is_uppercase(nullstr));
		EXPECT_EQ(0, ft_str_is_uppercase(mixed));
	}
}

namespace ex06 {
#include "ex06/ft_str_is_printable.c"

	TEST(ex06, ft_str_is_printable) {
		char test[7];
		strncpy(test, lowecase, 7);
		test[3] = 1;

		EXPECT_EQ(1, ft_str_is_printable(lowecase));
		EXPECT_EQ(1, ft_str_is_printable(mixed));
		EXPECT_EQ(0, ft_str_is_printable(test));
	}
}

/*
 
namespace ex07 {
#include "ex07/ft_strupcase.c"

	TEST(ex07, ft_strupcase) {
		char tlowcase[7];
		char tnum[8];
		char tmixed[10];

		strncpy(tlowcase, lowecase, 7);
		strncpy(tnum, numeric, 8);
		strncpy(tmixed, mixed, 10);

		EXPECT_STREQ("AJHSDF", ft_strupcase(tlowcase));
		EXPECT_STREQ(numeric, ft_strupcase(tnum));
		EXPECT_STREQ("87JDG{}][", ft_strupcase(tmixed));
	}
}

namespace ex08 {
#include "ex08/ft_strlowcase.c"

	TEST(ex08, ft_lowecase) {
		char tlowcase[7];
		char tnum[8];
		char tmixed[10];

		strncpy(tlowcase, lowecase, 7);
		strncpy(tnum, numeric, 8);
		strncpy(tmixed, mixed, 10);

		EXPECT_STREQ(lowecase, ft_strlowcase(tlowcase));
		EXPECT_STREQ(numeric, ft_strlowcase(tnum));
		EXPECT_STREQ("87jdg{}][", ft_strlowcase(tmixed));
	}
}

namespace ex09 {
#include "ex09/ft_strcapitalize.c"

	TEST(ex09, ft_strcapitalize) {
		char a[] = "a new*test 46JHJ TkdJ";
		char b[] = "a_n:w*test\t46ZHJ>TkdJ";

		EXPECT_STREQ("A New*Test 46jhj Tkdj", ft_strcapitalize(a));
		EXPECT_STREQ("A_N:W*Test\t46zhj>Tkdj", ft_strcapitalize(b));
	}
}

namespace ex10 {
#include "ex10/ft_strlcpy.c"
	
	char buff[20];
	char buff2[20];

	TEST(ex10, ft_strlcpy) {
		EXPECT_EQ(strlcpy(buff, lowecase, 20), ft_strlcpy(buff, lowecase, 20));
		EXPECT_STREQ(buff, buff2);

		memset(buff, 0, 20);
		memset(buff2, 0, 20);

		EXPECT_EQ(strlcpy(buff, lowecase, 3), ft_strlcpy(buff2, lowecase, 3));
		EXPECT_STREQ(buff, buff2);

		memset(buff, 0, 20);
		memset(buff2, 0, 20);
		memset(buff, 'a', 19);
		memset(buff2, 'a', 19);

		EXPECT_EQ(strlcpy(buff, lowecase, 20), ft_strlcpy(buff2, lowecase, 20));
		EXPECT_EQ(0, strncmp(buff, buff2, 20)); //using strncmp to avoid SEGFAULT
	}
}

namespace ex11 {
#include "ex11/ft_putstr_non_printable.c"
	
	char test[] = "Coucou\ntu vas bien ?";
	char result[] = "Coucou\0atu vas bien ?";
	char *buff = (char*)malloc(1 * strlen(test) + 1);

	memset(buff, 0, strlen(test) + 1);

	TEST(ex11, ft_putstr_non_printable) {
	}
}
*/

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
