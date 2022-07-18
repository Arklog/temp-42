#include "gtest/gtest.h"
#include <cstring>
#include <cstdio>

unsigned int
strlcat(char *dst, char *src, unsigned int siz)
{
        char *d = dst;
        char *s = src;
        unsigned int n = siz;
        unsigned int dlen;

        /* Find the end of dst and adjust bytes left but don't go past end */
        while (n-- != 0 && *d != '\0')
                d++;
        dlen = d - dst;
        n = siz - dlen;

        if (n == 0)
                return(dlen + strlen(s));
        while (*s != '\0') {
                if (n != 1) {
                        *d++ = *s;
                        n--;
                }
                s++;
        }
        *d = '\0';

        return(dlen + (s - src));        /* count does not include NUL */
}

char a[] = "abcde";
char b[] = "abcdefg";
char c[] = "abcfg";

char test[20];
char test2[20];
char test3[20];

namespace ex00 {
#include "ex00/ft_strcmp.c"

	TEST(ex00, ft_strcmp) {
		EXPECT_EQ(strcmp(a, a), ex00::ft_strcmp(a, a));
		EXPECT_EQ(strcmp(a, b), ex00::ft_strcmp(a, b));
		EXPECT_EQ(strcmp(a, c), ex00::ft_strcmp(a, c));
		EXPECT_EQ(strcmp(c, b), ex00::ft_strcmp(c, b));
	}
}

namespace ex01 {
#include "ex01/ft_strncmp.c"

	TEST(ex01, ft_strncpm) {
		EXPECT_EQ(strncmp(a, a, 6), ex01::ft_strncmp(a, a, 6));
		EXPECT_EQ(strncmp(a, b, 6), ex01::ft_strncmp(a, b, 6));
		EXPECT_EQ(strncmp(a, b, 3), ex01::ft_strncmp(a, b, 3));
		EXPECT_EQ(strncmp(c, b, 9), ex01::ft_strncmp(c, b, 9));
	}
}

namespace ex02 {
#include "ex02/ft_strcat.c"

TEST(ex02, ft_strcat) {
	memset(test, 0, 20);
	memset(test2, 0, 20);
	memset(test3, 0, 20);

	EXPECT_STREQ(strcat(test, a), ex02::ft_strcat(test2, a));
	memcpy(test3, test, 20);
	EXPECT_STREQ(strcat(test, test3), ex02::ft_strcat(test2, test3));
}
}

namespace ex03 {
#include "ex03/ft_strncat.c"

	TEST(ex03, ft_strncat) {
		memset(test, 0, 20);
		memset(test2, 0, 20);
		memset(test3, 0, 20);

		EXPECT_STREQ(strncat(test, a, 20), ex03::ft_strncat(test2, a, 20));
		memcpy(test3, test, 20);
		EXPECT_STREQ(strncat(test, test3, 20), ex03::ft_strncat(test2, test3, 20));


		memset(test, 0, 20);
		memset(test2, 0, 20);
		memset(test3, 0, 20);

		EXPECT_STREQ(strncat(test, a, 3), ex03::ft_strncat(test2, a, 3));
		memcpy(test3, test, 20);
		EXPECT_STREQ(strncat(test, test3, 5), ex03::ft_strncat(test2, test3, 5));
	}
}

namespace ex04 {
#include "ex04/ft_strstr.c"

	TEST(ex04, ft_strstr) {
		EXPECT_EQ(strstr(a, a), ex04::ft_strstr(a, a));
		EXPECT_EQ(strstr(a, "a"), ex04::ft_strstr(a, (char*)"a"));
		EXPECT_EQ(strstr(a, "abc"), ex04::ft_strstr(a, (char*)"abc"));
		EXPECT_EQ(strstr(a, "9"), ex04::ft_strstr(a, (char*)"9"));
	}
}

namespace ex05 {
#include "ex05/ft_strlcat.c"

	TEST (ex05, ft_strlcat) {
		memset(test, 0, 20);
		memset(test2, 0, 20);
		memset(test3, 0, 20);

		EXPECT_EQ(strlcat(test, a, 20), ex05::ft_strlcat(test2, a, 20));
		memcpy(test3, test, 20);
		EXPECT_EQ(strlcat(test, test3, 20), ex05::ft_strlcat(test2, test3, 20));


		memset(test, 0, 20);
		memset(test2, 0, 20);
		memset(test3, 0, 20);

		EXPECT_EQ(strlcat(test, a, 3), ex05::ft_strlcat(test2, a, 3));
		EXPECT_STREQ(test, test2);
		memcpy(test3, test, 20);
		EXPECT_EQ(strlcat(test, test3, 5), ex05::ft_strlcat(test2, test3, 5));
	}
}

int main() {
	testing::InitGoogleTest();
	return RUN_ALL_TESTS();
}
