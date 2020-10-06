CC = g++
CFLAGS = -g

INCLUDE = 
myapp = main.cpp Output.cpp String_Manipulation.cpp
objects = $(myapp:.c=.o)

target = fmt

$(target): $(objects)
	$(CC) $(CFLAGS) $(INCLUDE) -o $(target) $(objects)

.c.o:
	$(CC)-c -o $(CFLAGS) $(INCLUDE) $< $@

$(objects): Header.h

.PHONY : clean

clean:
	rm $(target) $(objects)
