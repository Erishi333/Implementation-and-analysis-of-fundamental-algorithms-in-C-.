# Makefile for C++ Algorithm Lab
# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2
LDFLAGS = 

# Directories
SRC_DIR = src
BUILD_DIR = build
BIN_DIR = bin

# Source files and objects
SOURCES = main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = $(BIN_DIR)/algorithm_lab

# Default target
all: $(EXECUTABLE)

# Create build and bin directories
$(BUILD_DIR) $(BIN_DIR):
	mkdir -p $@

# Build executable
$(EXECUTABLE): $(BUILD_DIR) $(BIN_DIR) $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $@ $(SOURCES) $(LDFLAGS)

# Run the executable
run: $(EXECUTABLE)
	./$(EXECUTABLE)

# Clean build files
clean:
	rm -rf $(BUILD_DIR) $(BIN_DIR)

# Rebuild from scratch
rebuild: clean all

# Help message
help:
	@echo "Available targets:"
	@echo "  make all      - Build the executable"
	@echo "  make run      - Build and run the executable"
	@echo "  make clean    - Remove build files"
	@echo "  make rebuild  - Clean and build from scratch"
	@echo "  make help     - Show this help message"

.PHONY: all run clean rebuild help
