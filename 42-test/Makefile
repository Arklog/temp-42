FOLDER=$(shell realpath ~/$(shell echo ${GIT} | tr '/' ' ' | awk '{print $$(NF)}'))
CPPFLAGS=g++ -Werror -Wall -Wextra -g -I. -I${FOLDER}
INCLUDES=-L. -lgtest -lpthread

all: | clean compile

compile:
	git clone ${GIT} ${FOLDER}
	-norminette ${FOLDER}
	@-${CPPFLAGS} ${SUBJECT}.cpp ${INCLUDES}
	-./a.out

clean:
	-rm -f a.out
	-rm -rf ${FOLDER}/.git
	-rm -rI ${FOLDER}
