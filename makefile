CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp Figure.h Rhombus.h Rhombus.cpp Pentagon.h Pentagon.cpp Hexagon.h Hexagon.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=lab3

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
