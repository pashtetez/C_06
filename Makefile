CC=gcc
CFLAGS=-c
LDFLAGS=-lm -lreadline
SOURCES=word.c mix.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=word

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
  $(CC) $(LDFLAGS) $(OBJECTS) -o $@

.c.o:
	$(CC) $(CFLAGS) $< -o $@

.PHONY: clean

clean:
	rm -rf *o
