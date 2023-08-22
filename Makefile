#VARIABLES
CC = gcc
TARGET = AgeOfAJC
FILES = *.c

#REGLES
all:
	mkdir -p ${TARGET}
	${CC} -o ${TARGET}/${TARGET} ${FILES}

run: ${TARGET}
	@./${TARGET}/${TARGET}

clean: ${TARGET}
	@rm ${TARGET}/${TARGET}
	@rm -d ${TARGET}