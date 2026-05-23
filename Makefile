CC = gcc
CFLAGS = -Iinclude -Wall -O3 -funroll-loops
TARGET = build/ACTownGenerator.exe

SRCS = src/main.c \
       src/generator.c \
       src/rand.c \

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

clean:
	del /f $(TARGET)