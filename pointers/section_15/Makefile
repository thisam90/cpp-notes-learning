# BUILD_TYPE=release make  # Optimized build

# Compiler settings
CXX = clang++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic
LDFLAGS = 

# Build type (change to 'release' for optimized build)
BUILD_TYPE = debug

ifeq ($(BUILD_TYPE),debug)
    CXXFLAGS += -g -O0 -DDEBUG
else
    CXXFLAGS += -O3 -DNDEBUG
endif

# Target executable name
TARGET = program

# Find all .cpp files in current directory
SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
DEPENDS = $(OBJECTS:.o=.d)

# Default target
all: $(TARGET)

# Link the executable
$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@ $(LDFLAGS)
	@echo "Build complete: $(TARGET)"

# Compile source files to object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

# Clean build artifacts
clean:
	rm -f $(OBJECTS) $(DEPENDS) $(TARGET)
	@echo "Clean complete"

# Run the program
run: $(TARGET)
	./$(TARGET)

# Rebuild from scratch
rebuild: clean all

# Include dependency files
-include $(DEPENDS)

# Phony targets
.PHONY: all clean run rebuild