#VARIABLES
CC = gcc
TARGET = 'Age of AJC'
FILES = *.c

#REGLES
all:
	${CC} -o ${TARGET}/${TARGET} ${FILES}

run: ${TARGET}
	@./${TARGET}/${TARGET}

clean: ${TARGET}
	@rm ${TARGET}