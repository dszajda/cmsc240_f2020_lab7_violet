EXECS = Tester
OBJS = tester.o Shape.o
HDRS = Shape.h

CC = g++
CCFLAGS = -std=c++17 -Wall -Wno-deprecated -Werror=return-type -g

all: $(EXECS)

Tester: $(OBJS)
	$(CC) $(CCFLAGS) $^ -o $@
%.o: %.cpp *.h
	$(CC) $(CCFLAGS) -c $<
%.o: %.cpp
	$(CC) $(CCFLAGS) -c $<

clean:
	/bin/rm -f a.out $(OBJS) $(EXECS)
