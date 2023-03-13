# Compiler and linker settings
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -pedantic
LDFLAGS = # Probably won't need this :)

# Directories to search for source files
SRCDIRS = ./ ./moves

# Find all source files in SRCDIRS
SOURCES = $(shell find $(SRCDIRS) -name "*.cpp")

# Derive the corresponding object file names
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES))

# Target executable
TARGET = my_program

# Main target rule
$(TARGET): $(OBJECTS)
	$(CXX) $(LDFLAGS) $^ -o $@

# Rule to build an object file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule
clean:
	find $(SRCDIRS) -name "*.o" -type f -delete
	rm -f $(TARGET)
