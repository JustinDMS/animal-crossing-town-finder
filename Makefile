CC = gcc
CFLAGS = -Iinclude -Wall
TARGET = build/animal-crossing-town-finder.exe

SRCS = src/main.c \
       src/generator.c \
       src/rand.c \

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	del /f $(TARGET)