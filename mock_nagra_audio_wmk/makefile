# Makefile for building binary_copy program

# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -O2

# Target executable name
TARGET = bin/NexGuardSDK_AudioStreamEmbedder

# Source file
SRC = mock_audio_wmk_tool.c

# Default target to build the program
all: $(TARGET)

# Rule to build the binary_copy executable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

# Clean up build artifacts
clean:
	rm -f $(TARGET)
